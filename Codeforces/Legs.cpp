#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll count=0;
        count+=n/4;
        n%=4;
        count+=n/2;
        cout<<count<<endl;
    }
}