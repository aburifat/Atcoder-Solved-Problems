#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   ll n,q;
   cin>>n>>q;
   vector<ll>arr;
   ll sum[n+5];
   ll tmp;
   for(ll i=0;i<n;i++){
       cin>>tmp;
       arr.push_back(tmp);
   }
    sort(arr.begin(),arr.end());
    for(ll i=0;i<n;i++){
        if(i==0){
            sum[i]=arr[i];
            continue;
        }
        sum[i]=arr[i]+sum[i-1];
    }
   for(ll i=0;i<q;i++){
       ll ans=0;
       cin>>tmp;
       if(tmp<arr[0]||tmp>arr[n-1]){
           ll val=tmp*n;
           ans=abs(val-sum[n-1]);
       }else{
           ll left=lower_bound(arr.begin(),arr.end(),tmp)-arr.begin();
            if(arr[left]>=tmp)left--;
            ll right=upper_bound(arr.begin(),arr.end(),tmp)-arr.begin();
            right--;
            //cout<<left<<" "<<right<<endl;
            if(left>=0){
                ll val=(tmp*(left+1));
                ans+=abs(val-sum[left]);
            }
            if(right<n){
                ll val=(n-right-1)*tmp;
                ll val2=sum[n-1]-sum[right];
                ans+=abs(val-val2);
            }
       }
       cout<<ans<<endl;
   }
    return 0;
}