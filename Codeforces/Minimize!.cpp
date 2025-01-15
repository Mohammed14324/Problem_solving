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
    while(t--){
        ll a,b;cin>>a>>b;
        ll c=floor((a+b)/2);
        cout<<(c-a)+(b-c)<<"\n";
    }
}