#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n,a,b,c;cin>>n>>a>>b>>c;
    ll ans=-1;
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=n;j++){
            ll key=i*a + j*b ;
            if(key<=n && (n-key)%c==0){
                ans=max(ans , i+j+((n-key)/c));
            }
        }
    }
    cout<<ans<<"\n";
}