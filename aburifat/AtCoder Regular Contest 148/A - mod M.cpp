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
// Problem	: A - mod M
// Contest	: AtCoder - AtCoder Regular Contest 148
// URL		: https://atcoder.jp/contests/arc148/tasks/arc148_a
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
		vector<ll>v,facts;
		map<ll,ll>mp;
		ll gcd=0;
		
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		bool even=false,odd=false;
		for(ll i=0;i<n;i++){
			if(v[i]%2==0)even=true;
			else odd=true;
		}
		if(even&&odd){
			for(ll i=1;i<v.size();i++){
				gcd=__gcd(gcd,(v[i]-v[0]));
			}
			if(gcd>1)cout<<"1\n";
			else cout<<"2\n";
		}else{
			cout<<"1\n";
		}
	}
	return 0;
}