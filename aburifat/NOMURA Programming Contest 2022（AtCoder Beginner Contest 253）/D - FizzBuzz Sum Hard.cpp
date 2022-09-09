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
// Problem	: D - FizzBuzz Sum Hard
// Contest	: AtCoder - NOMURA Programming Contest 2022（AtCoder Beginner Contest 253）
// URL		: https://atcoder.jp/contests/abc253/tasks/abc253_d
// Memory Limit : 1024 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll getSum(ll a){
	ll sum1=a;
	ll sum2=a+1;
	if(sum1%2==0)sum1/=2;
	else sum2/=2;
	ll sum=sum1*sum2;
	return sum;
}

int main(){
	ll t=1;
	//cin>>t;
	for(ll T=1;T<=t;T++){
		ll n,a,b,c;
		cin>>n>>a>>b;
		c=a*b;
		c=c/__gcd(a,b);
		ll x, y, z;
		x=n/a;
		y=n/b;
		z=n/c;
		ll ans=getSum(n);
		ans-=(getSum(x)*a);
		ans-=(getSum(y)*b);
		ans+=(getSum(z)*c);
		cout<<ans<<endl;
	}
	return 0;
}