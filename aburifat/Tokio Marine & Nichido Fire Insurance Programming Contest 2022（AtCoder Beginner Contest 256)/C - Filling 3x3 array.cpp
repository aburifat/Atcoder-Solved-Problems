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
// Problem	: C - Filling 3x3 array
// Contest	: AtCoder - Tokio Marine & Nichido Fire Insurance Programming Contest 2022（AtCoder Beginner Contest 256)
// URL		: https://atcoder.jp/contests/abc256/tasks/abc256_c
// Memory Limit : 1024 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	//cin>>t;
	for(ll T=1;T<=t;T++){
		ll h[3],w[3];
		for(ll i=0;i<3;i++)cin>>h[i];
		for(ll i=0;i<3;i++)cin>>w[i];
		ll ans=0;
		ll mat[3][3];
		for(ll i=1;i<=30;i++){
			for(ll j=1;j<=30;j++){
				for(ll k=1;k<=30;k++){
					for(ll l=1;l<=30;l++){
						mat[0][0]=i;
						mat[0][1]=k;
						mat[0][2]=w[0]-i-k;
						mat[1][0]=j;
						mat[2][0]=h[0]-i-j;
						mat[1][1]=l;
						mat[1][2]=w[1]-j-l;
						mat[2][1]=h[1]-k-l;
						mat[2][2]=h[2]-mat[0][2]-mat[1][2];
						if(mat[0][2]>0&&mat[2][0]>0&&mat[1][2]>0&&mat[2][1]>0&&mat[2][2]>0){
							ll ct=0;
							if(mat[0][0]+mat[0][1]+mat[0][2]==w[0])ct++;
							if(mat[1][0]+mat[1][1]+mat[1][2]==w[1])ct++;
							if(mat[2][0]+mat[2][1]+mat[2][2]==w[2])ct++;
							if(mat[0][0]+mat[1][0]+mat[2][0]==h[0])ct++;
							if(mat[0][1]+mat[1][1]+mat[2][1]==h[1])ct++;
							if(mat[0][2]+mat[1][2]+mat[2][2]==h[2])ct++;
							if(ct==6)ans++;
						}
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}