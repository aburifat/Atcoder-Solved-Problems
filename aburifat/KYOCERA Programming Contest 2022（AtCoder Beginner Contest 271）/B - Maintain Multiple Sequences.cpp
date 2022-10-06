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
// Problem	: B - Maintain Multiple Sequences
// Contest	: AtCoder - KYOCERA Programming Contest 2022（AtCoder Beginner Contest 271）
// URL		: https://atcoder.jp/contests/abc271/tasks/abc271_b
// Memory Limit : 1024 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	//cin>>t;
	for(ll T=1;T<=t;T++){
		ll n,q;
		cin>>n>>q;
		vector<ll>v[n+5];
		for(ll i=0;i<n;i++){
			ll k;
			cin>>k;
			for(ll j=0;j<k;j++){
				ll tmp;
				cin>>tmp;
				v[i].push_back(tmp);
			}
		}
		for(ll i=0;i<q;i++){
			ll a,b;
			cin>>a>>b;
			a--;
			b--;
			cout<<v[a][b]<<endl;
		}
	}
	return 0;
}