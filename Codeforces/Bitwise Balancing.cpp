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
const ll N=1e6;
int main(){
    ll  t;cin>>t;
    while(t--){
        ll b,c,d;cin>>b>>c>>d;
        ll a=(d|b)-(d&c);
        if(((a|b)-(a&c))==d){
            cout<<a<<endl;
        }
        else{
            cout<<"-1\n";
        }
    }
}