#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        vector<ll> a(n),b(m);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<m;i++){
            cin>>b[i];
        }
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        ll count=0;
        for(ll i=0;i<n;i++){
            count+=max(abs(a[i]-b[n-i-1]),abs(a[i]-b[m-i-1]));
            
        }
        cout<<count<<"\n";
    }
}