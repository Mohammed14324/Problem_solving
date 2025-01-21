#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;cin>>n;
        ll d=n%11;
        if(n/111>=d){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}