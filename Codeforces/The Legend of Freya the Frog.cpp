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
#define For(i , j) for(long long i=0;i<j;i++)
using namespace std;

int main() {
    ll t;cin>>t;
    ll one=1;
    while(t--){
        ll a,b,k;cin>>a>>b>>k;
        ll aa=((floor(a/k)+min(one ,a%k))*2)-1;
        ll bb=(floor(b/k)+min(one , b%k))*2;
        ll ans=max(aa,bb);
        cout<<ans<<"\n";
    }
}