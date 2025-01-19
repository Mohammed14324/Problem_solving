#include <bits/stdc++.h>
#define ll long long
#define VTL vector<ll>
#define VTB vector<bool>
#define VTC vector<char>
#define VTS vector<string>
#define VT vector
#define all(x) x.begin() , x.end()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define FOR(i , j) for(long long i=0;i<j;i++)
using namespace std;


int main() {
    ll t;cin>>t;
    while(t--){
        ll n,a,b;cin>>n>>a>>b;
        ll gc=gcd(a,b);
        VTL vt(n);
        for(ll i=0;i<n;i++){
            cin>>vt[i];
            vt[i]%=gc;
        }
        sort(vt.begin() , vt.end());
        ll ans=vt[n-1]-vt[0];
        for(ll i=0;i<n-1;i++){
            ans=min(ans , (vt[i]+gc)-vt[i+1]);
        }
        cout<<ans<<endl;
    }
}