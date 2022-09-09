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
// Problem	: H - H
// Contest	: Virtual Judge - ICPC Collaborative Contest - 27
// URL		: https://vjudge.net/contest/499604#problem/H
// Memory Limit : 256 MB
// Time Limit	: 2000 ms
//  
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	//cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll mx=n*m;
		ll minDif=LONG_LONG_MAX;
		for(ll i=1;i<n;i++){
			ll val=i*m;
			ll rem=mx-val;
			if((m%2==0)||((n-i)%2==0)){
				ll val1=rem/2;
				ll dif=abs(val-val1);
				minDif=min(minDif,dif);
			}else{
				if(m>(n-i)){
					ll tmp=m/2;
					ll val1=(n-i)*(tmp);
					ll val2=(n-i)*(tmp+1);
					ll nowMax=max(val,max(val1,val2));
					ll nowMin=min(val,min(val1,val2));
					ll dif=abs(nowMax-nowMin);
					minDif=min(minDif,dif);
				}else{
					ll tmp=(n-i)/2;
					ll val1=m*tmp;
					ll val2=m*(tmp+1);
					ll nowMax=max(val,max(val1,val2));
					ll nowMin=min(val,min(val1,val2));
					ll dif=abs(nowMax-nowMin);
					minDif=min(minDif,dif);
				}
			}
		}
		for(ll i=1;i<m;i++){
			ll val=i*n;
			ll rem=mx-val;
			if((n%2==0)||((m-i)%2==0)){
				ll val1=rem/2;
				ll dif=abs(val-val1);
				minDif=min(minDif,dif);
			}else{
				if(n>(m-i)){
					ll tmp=n/2;
					ll val1=(m-i)*(tmp);
					ll val2=(m-i)*(tmp+1);
					ll nowMax=max(val,max(val1,val2));
					ll nowMin=min(val,min(val1,val2));
					ll dif=abs(nowMax-nowMin);
					minDif=min(minDif,dif);
				}else{
					ll tmp=(m-i)/2;
					ll val1=n*tmp;
					ll val2=n*(tmp+1);
					ll nowMax=max(val,max(val1,val2));
					ll nowMin=min(val,min(val1,val2));
					ll dif=abs(nowMax-nowMin);
					minDif=min(minDif,dif);
				}
			}
		}
		if(minDif==LONG_LONG_MAX)minDif=((n*m)%3);
		cout<<minDif<<endl;
	}
	return 0;
}