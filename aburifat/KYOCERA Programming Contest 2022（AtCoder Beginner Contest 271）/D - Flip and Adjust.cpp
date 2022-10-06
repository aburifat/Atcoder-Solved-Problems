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
// Problem	: D - Flip and Adjust
// Contest	: AtCoder - KYOCERA Programming Contest 2022（AtCoder Beginner Contest 271）
// URL		: https://atcoder.jp/contests/abc271/tasks/abc271_d
// Memory Limit : 1024 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	//cin>>t;
	for(ll T=1;T<=t;T++){
		ll n,s;
		cin>>n>>s;
		ll a[n+5],b[n+5];
		for(ll i=0;i<n;i++){
			cin>>a[i]>>b[i];
		}
		bool dp[n+5][s+5];
		for(ll i=0;i<n+5;i++){
			for(ll j=0;j<s+5;j++)dp[i][j]=false;
		}
		dp[0][0]=true;
		for(ll i=0;i<n;i++){
			for(ll j=0;j<s;j++){
				if(dp[i][j]){
					if(j+a[i]<=s)dp[i+1][j+a[i]]=true;
					if(j+b[i]<=s)dp[i+1][j+b[i]]=true;
				}
			}
		}
		if(dp[n][s]){
			cout<<"Yes\n";
			vector<bool>v;
			ll sum=s;
			for(ll i=n-1;i>=0;i--){
				if((s-a[i]>=0)&&(dp[i][s-a[i]])){
					v.push_back(true);
					s-=a[i];
				}
				else{
					v.push_back(false);
					s-=b[i];
				}
			}
			for(ll i=n-1;i>=0;i--){
				if(v[i])cout<<"H";
				else cout<<"T";
			}
			cout<<"\n";
		}else cout<<"No\n";
	}
	return 0;
}