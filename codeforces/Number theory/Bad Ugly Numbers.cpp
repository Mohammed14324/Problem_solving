#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;cin>>n;
        if(n==1){
            cout<<"-1\n";
            continue;
        }
        cout<<'2';
        for(ll i=1;i<n;i++){
            cout<<'9';
        }
        cout<<"\n";
    }
}