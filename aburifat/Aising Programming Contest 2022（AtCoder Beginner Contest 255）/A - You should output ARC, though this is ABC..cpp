#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll r,c;
    cin>>r>>c;
    r--;
    c--;
    ll arr[2][2];
    for(ll i=0;i<2;i++){
        for(ll j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    cout<<arr[r][c]<<endl;
    return 0;
}