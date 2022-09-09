#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll x, a, d, n;
    cin>>x>>a>>d>>n;
    ll l=a;
    ll r=a+(d*(n-1));
    if(r<l)swap(l,r);
    ll ans=0;
    if(x<=l)ans=abs(l-x);
    else if(x>=r)ans=abs(r-x);
    else{
        x-=a;
        if(x%d==0)ans=0;
        else{
            for(ll i=1;i<=abs(d);i++){
                if((x+i)%d==0){
                    ans=i;
                    break;
                }
            }
            for(ll i=1;i<=abs(d);i++){
                if((x-i)%d==0){
                    ans=min(ans,i);
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}