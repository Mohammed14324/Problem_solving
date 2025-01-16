#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vt) vt.begin(),vt.end()
#define For(i,n) for(ll i=0;i<n;i++)
#define VTL vector<ll>
#define VT vector
#define VTB vector<bool>
#define VTS vector<string>
#define VTC vector<char>
#define VTI vector<int>
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define line cout<<'\n'


ll m_d(ll n){
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0)return i;
    }
    return n;
}

int main(){
    ll t;cin>>t;
    while(t--){
        ll a,b;cin>>a>>b;
        ll l=(a*b)/gcd(a,b);
        cout<<l*(l==b?m_d(b):1)<<endl;
    }
}