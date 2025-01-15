#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<arr[n-1]<<' ';
        for(ll i=0;i<n-1;i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }
}