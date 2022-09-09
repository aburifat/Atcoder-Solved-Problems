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
// Problem	: B - Distance Between Tokens
// Contest	: AtCoder - NOMURA Programming Contest 2022（AtCoder Beginner Contest 253）
// URL		: https://atcoder.jp/contests/abc253/tasks/abc253_b
// Memory Limit : 1024 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	//cin>>t;
	for(ll T=1;T<=t;T++){
		ll r,c;
		cin>>r>>c;
		ll x1,y1,x2,y2;
		ll ct=0;
		for(ll i=0;i<r;i++){
			string s;
			cin>>s;
			for(ll j=0;j<c;j++){
				if(s[j]=='o'){
					if(ct==0){
						ct++;
						x1=i;
						y1=j;
					}else{
						x2=i;
						y2=j;
					}
				}
			}
		}
		ll ans=abs(x1-x2)+abs(y1-y2);
		cout<<ans<<endl;
	}
	return 0;
}