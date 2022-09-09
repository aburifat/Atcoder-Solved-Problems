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
// Problem	: F - F
// Contest	: Virtual Judge - ICPC Collaborative Contest - 27
// URL		: https://vjudge.net/contest/499604#problem/F
// Memory Limit : 256 MB
// Time Limit	: 2000 ms
//  
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	//cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n+5],left[n+5],right[n+5];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		left[0]=-1;
		for(ll i=1;i<n;i++){
			ll prev=i-1;
			while(arr[prev]>arr[i]){
				prev=left[prev];
				if(prev==-1)break;
			}
			left[i]=prev;
			//cout<<left[i]<<endl;
		}
		for(ll i=0;i<n;i++){
			if(left[i]==-1)left[i]=i+1;
			else left[i]=i-left[i];
			//cout<<left[i]<<endl;
		}
		right[n-1]=-1;
		for(ll i=n-2;i>=0;i--){
			ll prev=i+1;
			while(arr[prev]>arr[i]){
				prev=right[prev];
				if(prev==-1)break;
			}
			right[i]=prev;
			//cout<<right[i]<<endl;
		}
		for(ll i=n-1;i>=0;i--){
			if(right[i]==-1)right[i]=n-i;
			else right[i]=right[i]-i;
			//cout<<right[i]<<endl;
		}
		ll ans=0;
		for(ll i=0;i<n;i++){
			ans+=(left[i]*right[i]*arr[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}