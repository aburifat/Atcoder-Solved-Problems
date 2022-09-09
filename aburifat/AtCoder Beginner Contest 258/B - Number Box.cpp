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
// Problem	: B - Number Box
// Contest	: AtCoder - AtCoder Beginner Contest 258
// URL		: https://atcoder.jp/contests/abc258/tasks/abc258_b
// Memory Limit : 1024 MB
// Time Limit	: 2000 ms
//  
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dx[]={0,0,1,-1,1,1,-1,-1};
ll dy[]={1,-1,0,0,1,-1,1,-1};

string s[30];

ll goBabe(ll I, ll J, ll X, ll Y, ll N){
	ll val=0;
	for(ll i=0;i<N;i++){
		if(I<(2*N)&&J<(2*N)&&I>=0&&J>=0){
			val*=10;
			val+=(s[I][J]-'0');
			I+=X;
			J+=Y;
		}else break;
	}
	return val;
}

int main(){
	ll t=1;
	//cin>>t;
	while(t--){
		ll n;
		cin>>n;
		for(ll i=0;i<n;i++){
			cin>>s[i];
		}
		for(ll i=n;i<(2*n);i++){
			s[i-n]=s[i-n]+s[i-n];
			s[i]=s[i-n];
		}
		ll ans=0;
		for(ll i=0;i<(2*n);i++){
			for(ll j=0;j<(2*n);j++){
				for(ll k=0;k<8;k++){
					ll x=dx[k];
					ll y=dy[k];
					ans=max(ans,goBabe(i,j,x,y,n));
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}