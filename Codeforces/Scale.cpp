#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        string arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        for(ll i=0;i<n;i+=m){
            for(ll j=0;j<arr[0].length();j+=m){
                cout<<arr[i][j];
            }
            cout<<"\n";
        }
    }
}