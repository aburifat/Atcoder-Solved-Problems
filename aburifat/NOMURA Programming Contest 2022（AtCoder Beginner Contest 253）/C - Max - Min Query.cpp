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
// Problem	: C - Max - Min Query
// Contest	: AtCoder - NOMURA Programming Contest 2022（AtCoder Beginner Contest 253）
// URL		: https://atcoder.jp/contests/abc253/tasks/abc253_c
// Memory Limit : 1024 MB
// Time Limit	: 2000 ms


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

typedef tree<
int,
null_type,
less_equal<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;

int main(){
	ll t=1;
	//cin>>t;
	for(ll T=1;T<=t;T++){
		ordered_set oss;
		ll q;
		cin>>q;
		ll a,b,c;
		for(ll i=0;i<q;i++){
			cin>>a;
			if(a==1){
				cin>>b;
				//cout<<"AI : "<<i<<endl;
				oss.insert(b);
			}else if(a==2){
				cin>>b>>c;
				//cout<<"BI : "<<i<<endl;
				while(c--){
					ll len=oss.size();
					ll pos=oss.order_of_key(b);
					ll val=*oss.find_by_order(pos);
					//cout<<"Removing: "<<pos<<" "<<val<<" "<<b<<endl;
					if(b==val)oss.erase(oss.find_by_order(pos));
					else break;
					len=oss.size();
					//cout<<"Len: "<<len<<endl;
				}
			}else{
				//cout<<"CI : "<<i<<endl;
				ll len=oss.size();
				ll ans1=*oss.find_by_order(0);
				ll ans2=*oss.find_by_order(len-1);
				ll ans=abs(ans1-ans2);
				cout<<ans<<endl;
			}
		}
	}
	return 0;
}