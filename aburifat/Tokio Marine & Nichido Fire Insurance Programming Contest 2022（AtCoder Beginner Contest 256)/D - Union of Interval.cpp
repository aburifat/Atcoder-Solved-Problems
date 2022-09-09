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
// Problem	: D - Union of Interval
// Contest	: AtCoder - Tokio Marine & Nichido Fire Insurance Programming Contest 2022（AtCoder Beginner Contest 256)
// URL		: https://atcoder.jp/contests/abc256/tasks/abc256_d
// Memory Limit : 1024 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	//cin>>t;
	for(ll T=1;T<=t;T++){
		ll n;
		ll arr[200010];
		for(ll i=0;i<200010;i++)arr[i]=0;
		cin>>n;
		ll minStart=LONG_LONG_MAX;
		ll mxGo=LONG_LONG_MIN;
		for(ll i=0;i<n;i++){
			ll l,r;
			cin>>l>>r;
			minStart=min(minStart,l);
			mxGo=max(mxGo,r);
			arr[l]+=1;
			arr[r]-=1;
		}
		ll ck=0;
		for(ll i=minStart;i<=mxGo;i++){
			if(i!=minStart)arr[i]+=arr[i-1];
			if(i==mxGo&&ck==1){
				cout<<i<<endl;
				ck=0;
			}
			if(ck==0&&arr[i]>0){
				cout<<i<<" ";
				ck=1;
			}else if(ck==1&&arr[i]<=0){
				cout<<i<<endl;
				ck=0;
			}
		}
	}
	return 0;
}