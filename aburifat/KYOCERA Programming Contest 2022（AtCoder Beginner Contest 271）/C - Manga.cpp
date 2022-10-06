// /*******Bismillahir-Rahmanir-Rahim**********/
// 
// Name         : Abu Rifat Muhammed Al Hasib
// Institution  : University of Barisal, Bangladesh
// Github       : https://github.com/abu-rifat
// website	: https://aburifat.com
// 
// Codeforces   : https://codeforces.com/profile/ARMaster
// lightoj      : https://lightoj.com/user/abu-rifat
// AtCoder      : https://atcoder.jp/users/aburifat
// codechef     : https://www.codechef.com/users/aburifat
// SPOJ         : https://www.spoj.com/users/abu_rifat
// UvaOJ        : https://uhunt.onlinejudge.org/id/889274
// 
// facebook     : https://facebook.com/AbuRifatM
// linkedin     : https://www.linkedin.com/in/aburifat
// Email        : rifat.cse4.bu@gmail.com
// 		  armalhasib@gmail.com
// 		  abu.rifat.m@gmail.com
// 
// Problem	: C - Manga
// Contest	: AtCoder - KYOCERA Programming Contest 2022（AtCoder Beginner Contest 271）
// URL		: https://atcoder.jp/contests/abc271/tasks/abc271_c
// Memory Limit : 1024 MB
// Time Limit	: 4000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	//cin>>t;
	for(ll T=1;T<=t;T++){
		ll n;
		cin>>n;
		vector<ll>v;
		ll dup=0;
		map<ll,ll>mp;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			if(!mp[tmp]){
				mp[tmp]++;
				v.push_back(tmp);
			}else dup++;
		}
		sort(v.begin(),v.end());
		ll book=0;
		ll r=v.size()-1;
		for(ll i=0;i<=r;){
			if(v[i]==book+1){
				book++;
				i++;
			}else{
				if(dup>=2){
					dup-=2;
					book++;
				}else if(dup){
					dup--;
					r--;
					book++;
				}else if(r-1>=i){
					r-=2;
					book++;
				}else break;
			}
		}
		while(dup>=2){
			dup-=2;
			book++;
		}
		cout<<book<<endl;
	}
	return 0;
}