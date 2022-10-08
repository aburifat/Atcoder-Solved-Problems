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
// Problem	: C - Max Even
// Contest	: AtCoder - AtCoder Beginner Contest 272
// URL		: https://atcoder.jp/contests/abc272/tasks/abc272_c
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
		vector<ll>even,odd;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			if(tmp%2)odd.push_back(tmp);
			else even.push_back(tmp);
		}
		sort(even.begin(),even.end());
		sort(odd.begin(),odd.end());
		ll sum=-1;
		if(even.size()>1)sum=max(sum,even[even.size()-1]+even[even.size()-2]);
		if(odd.size()>1)sum=max(sum,odd[odd.size()-1]+odd[odd.size()-2]);
		cout<<sum<<endl;
	}
	return 0;
}