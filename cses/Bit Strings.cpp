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
 

ll Pow(ll a, ll b,ll mod) 
{
    if (b == 0) return 1;
    if (b == 1) return a % mod;
    ll p = Pow(a, b / 2,mod) % mod;
    p = (p * p) % mod;
    if (b % 2 != 0) {
        p = (p * (a % mod)) % mod;
    }
    return p;
}
 
 
int main(){
    ll n;cin>>n;
    cout<<Pow(2,n,1e9+7)<<endl;
}