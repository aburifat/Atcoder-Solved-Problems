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
// Problem	: B - Everyone is Friends
// Contest	: AtCoder - AtCoder Beginner Contest 272
// URL		: https://atcoder.jp/contests/abc272/tasks/abc272_b
// Memory Limit : 1024 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	//cin>>t;
	for(ll T=1;T<=t;T++){
		ll n,m;
		cin>>n>>m;
		map<pair<ll,ll>,bool>mp;
		for(ll i=0;i<m;i++){
			vector<ll>v;
			ll k;
			cin>>k;
			for(ll j=0;j<k;j++){
				ll tmp;
				cin>>tmp;
				v.push_back(tmp);
			}
			sort(v.begin(),v.end());
			for(ll j=0;j<k-1;j++){
				for(ll l=j+1;l<k;l++){
					mp[{v[j],v[l]}]=true;
				}
			}
		}
		bool ck=true;
		for(ll i=1;i<n;i++){
			for(ll j=i+1;j<=n;j++){
				if(mp[{i,j}]==false){
					ck=false;
					break;
				}
			}
			if(ck==false)break;
		}
		if(ck)cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}