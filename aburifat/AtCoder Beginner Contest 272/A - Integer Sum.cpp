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
// Problem	: A - Integer Sum
// Contest	: AtCoder - AtCoder Beginner Contest 272
// URL		: https://atcoder.jp/contests/abc272/tasks/abc272_a
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
		cin>>n;
		ll sum=0;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			sum+=tmp;
		}
		cout<<sum;
	}
	return 0;
}