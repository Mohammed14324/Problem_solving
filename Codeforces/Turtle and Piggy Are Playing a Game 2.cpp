#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> vt(n);
        for(ll i=0;i<n;i++){
            cin>>vt[i];
        }
        sort(vt.begin() , vt.end());
        cout<<vt[n/2]<<endl;
    }
}