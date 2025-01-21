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
const ll N=1e3;
vector<ll> adj[N];

int main(){
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        fill(adj,adj+n+1,VTL());
        ll leaf=0;
        for(ll i=0;i<m;i++){
            ll a,b;cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        for(ll i=1;i<=n;i++){
            if(adj[i].size()==1){
                leaf=i;
                break;
            }
        }
        ll y=adj[adj[leaf][0]].size();
        ll node_y=adj[leaf][0];
        ll x=1;
        for(ll i:adj[node_y]){
            x=max(x,(ll)adj[i].size());
        }
        cout<<x<<' '<<y-1<<endl;
    }
}