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
// Problem	: E - Subsequence Path
// Contest	: AtCoder - KYOCERA Programming Contest 2022（AtCoder Beginner Contest 271）
// URL		: https://atcoder.jp/contests/abc271/tasks/abc271_e
// Memory Limit : 1024 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr ll inf = numeric_limits<ll>::max() / 2;

int main(){
	ll t=1;
	//cin>>t;
	for(ll T=1;T<=t;T++){
		ll n,m,k;
		cin>>n>>m>>k;
		ll a[m],b[m],c[m];
		for(ll i=0;i<m;i++){
			cin>>a[i]>>b[i]>>c[i];
			a[i]--,b[i]--;
		}
		vector<ll>dp(n,inf);
		dp[0]=0;
		for(ll i=0;i<k;i++){
			ll e;
			cin>>e;
			e--;
			if(dp[b[e]]>dp[a[e]]+c[e])dp[b[e]]=dp[a[e]]+c[e];
		}
		if(dp[n-1]==inf)dp[n-1]=-1;
		cout<<dp[n-1]<<endl;
	}
	return 0;
}