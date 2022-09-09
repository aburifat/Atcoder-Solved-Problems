// /*******Bismillahir-Rahmanir-Rahim**********/
//  
// Name         : Abu Rifat Muhammed Al Hasib
// Institution  : University of Barisal, Bangladesh
// Github       : https://github.com/abu-rifat
// website	: https://a...content-available-to-author-only...t.com
//  
// Codeforces   : https://codeforces.com/profile/ARMaster
// lightoj      : https://lightoj.com/user/abu-rifat
// AtCoder      : https://atcoder.jp/users/aburifat
// codechef     : https://codechef.com/users/aburifat
// SPOJ         : https://spoj.com/users/abu_rifat
// UvaOJ        : https://uhunt.onlinejudge.org/id/889274
//  
// facebook     : https://facebook.com/AbuRifatM
// linkedin     : https://www.linkedin.com/in/aburifat
// Email        : rifat.cse4.bu@gmail.com
// 		  armalhasib@gmail.com
// 		  abu.rifat.m@gmail.com
//  
// Problem	: D - Trophy
// Contest	: AtCoder - AtCoder Beginner Contest 258
// URL		: https://atcoder.jp/contests/abc258/tasks/abc258_d
// Memory Limit : 1024 MB
// Time Limit	: 2000 ms
//  
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main(){
	ll t=1;
	//cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		ll fst[n+5],nxt[n+5];
		ll fstSum[n+5];
		for(ll i=0;i<n;i++){
			ll a,b;
			cin>>a>>b;
			fst[i]=a+b;
			nxt[i]=b;
		}
		for(ll i=0;i<n;i++){
			if(i==0)fstSum[i]=fst[i];
			else fstSum[i]=fst[i]+fstSum[i-1];
		}
		ll ans=LONG_LONG_MAX;
		for(ll i=0;i<n;i++){
			ll tmp=fstSum[i];
			ll rem=x-(i+1);
			tmp=tmp+(rem*nxt[i]);
			ans=min(ans,tmp);
		}
		cout<<ans<<endl;
	}
	return 0;
}