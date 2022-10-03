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
// Problem	: A - Max Mod Min
// Contest	: AtCoder - AtCoder Regular Contest 147
// URL		: https://atcoder.jp/contests/arc147/tasks/arc147_a
// Memory Limit : 1024 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll t=1;
	//cin>>t;
	for(ll T=1;T<=t;T++){
		ll n;
		cin>>n;
		deque<ll>q;
		for(ll i=0;i<n;i++){
			ll tmp;
			cin>>tmp;
			q.push_back(tmp);
		}
		sort(q.begin(),q.end());
		ll ct=0;
		while(q.size()>1){
			ll aj=q[q.size()-1];
			ll ai=q[0];
			ll val=aj%ai;
			q.pop_back();
			if(val)q.push_front(val);
			ct++;
		}
		cout<<ct<<endl;
	}
	return 0;
}