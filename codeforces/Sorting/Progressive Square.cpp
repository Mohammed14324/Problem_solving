#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;cin>>t;
    while(t--){
        ll n,c,d;cin>>n>>c>>d;
        vector<ll> vt(n*n);
        ll minn=0;
        for(ll i=0;i<n*n;i++){
            cin>>vt[i];
        }
        sort(vt.begin() , vt.end());
        vector<ll> arr;
        minn=vt[0];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                arr.push_back(minn+(i*c)+(j*d));
            }
        }
        sort(arr.begin() , arr.end());
        if(arr==vt){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}