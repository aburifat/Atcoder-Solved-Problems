const got = require('got')
const axios = require('axios')
const cheerio = require("cheerio")
const fs = require('fs')
const options = require('./options.json')

class Problem {
    constructor(fileName, groupName, url, isAC, sourceText,fileExtension, name,filePath) {
        this.groupName = groupName
        this.isAC = isAC
        this.url = url
        this.fileName = fileName
        this.sourceText = sourceText
        this.fileExtension = fileExtension
        this.name = name
        this.filePath = filePath
    }
}

const saveProblem = async (problem) => {
    try {
        await fs.promises.mkdir(problem.filePath, { recursive: true });
    } catch (error) {
        console.error(err);
    }

    problem.filePath = problem.filePath + '/' + problem.fileName

    try {
        await fs.promises.access(problem.filePath);
        //  file already exists
        if (options.overwrite) {
            fs.writeFile(problem.filePath, problem.sourceText, function (err) {
                if (err) {
                    return console.error(err);
                }
                console.log(`Successfully scraped ${problem.fileName} : ${problem.groupName}`);
            });
        } else {
            console.log(`${problem.fileName} : ${problem.groupName} already exists.`);
        }
    } catch (error) {
        //  file doesnt exists
        fs.writeFile(problem.filePath, problem.sourceText, function (err) {
            if (err) {
                return console.error(err);
            }
            console.log(`Successfully scraped ${problem.fileName} : ${problem.groupName}`);
        });
    }
}

const scrapeAtcoder = async (problem) => {
    try {
        const solutionPage = await axios.get(problem.url);
        const $ = cheerio.load(solutionPage.data);

        problem.sourceText = $("#submission-code").text();
        var contestName = $("head > title").text();

        // s1 - contestname(which can contain '-')
        contestName = contestName.split('-')
        contestName.shift()
        contestName = contestName.join('-')
        contestName = contestName.trim()
        problem.groupName =contestName

        $('th').each(function (i, ele) {

            if ($(this).text() === 'Task') {
                problem.name = $(this).next().text()
                return false // this will break the .each loop
            }
        })

    } catch (error) {
        console.error(`[error in scraping ${problem.url} from atcoder]\t` + error.message)
    }
};

const getAtcoderSubmissions = async () => {
    if (!options.atcoderHandle || typeof (options.atcoderHandle) !== "string" || options.atcoderHandle.length == 0) return
    try {

        var startDate = new Date()
        // kenkoooo api will give maximum 500 submissions, so dont go too much before in time
        startDate.setDate(startDate.getDate() - options.atcoderMaxPrevDays)
        startDate = Math.floor(startDate.getTime() / 1000)

        var submissions = await got.get(`https://kenkoooo.com/atcoder/atcoder-api/v3/user/submissions?user=${options.atcoderHandle}&from_second=${startDate}`);
        submissions = submissions.body;
        submissions = JSON.parse(submissions)

        for (var i = 0; i < submissions.length; i++) {
            var problem = new Problem()
            problem.isAC = submissions[i].result === 'AC' ? true : false
            if (problem.isAC === false && options.onlyAC === true) continue

            problem.fileExtension = options.defaultExtension
            if (submissions[i].language in options.extensionMapping && options.extensionMapping[submissions[i].language].length > 0) {
                problem.fileExtension = options.extensionMapping[submissions[i].language]
            }
            problem.groupName = submissions[i].contest_id
            problem.url = `https://atcoder.jp/contests/${submissions[i].contest_id}/submissions/${submissions[i].id}`
            await scrapeAtcoder(problem)
            problem.fileName = problem.name + (options.giveUniqueNames ? "-" + submissions[i].id : "") + problem.fileExtension
            problem.filePath = `./${options.atcoderHandle}/${problem.groupName}`
            saveProblem(problem)
        }

    } catch (error) {
        console.error(error.message)
    }
};

getAtcoderSubmissions();
