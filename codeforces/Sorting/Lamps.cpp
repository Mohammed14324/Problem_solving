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

template<typename T>
void display(vector<T> vt){for(T i:vt){cout<<i<<' ';}line;}

template<typename T>
void get(vector<T>& vt){for(T& i:vt){cin>>i;}}


int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> adj[n+1];
        for(ll i=0;i<n;i++){
            ll a,b;cin>>a>>b;
            adj[a].push_back(b);
        }
        ll sum=0;
        for(ll i=0;i<=n;i++){
            sort(adj[i].rbegin(),adj[i].rend());
            for(ll j=0;j<i && j<adj[i].size();j++){
                sum+=adj[i][j];
            }
        }
        cout<<sum<<endl;
    }
}