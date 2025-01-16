#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> input(n);
        for(ll i=0;i<n;i++){
            cin>>input[i];
        }
        if(input[0]!=n){
            cout<<"NO\n";
            continue;
        }
        bool are=true;
        for(ll i=0;i<n;i++){
            ll pos=input[i]-1;
            if(!(input[pos]>=(i+1))){
                are=false;
                break;
            }
        }
        cout<<(are?"Yes\n":"No\n");
    }
}