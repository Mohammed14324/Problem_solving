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
vector<pair<ll,ll>> adj[N];
ll ans;
void dfs(pair<ll,ll> cur,ll count,vector<bool>&seen){
    ans=max(ans,count);
    for(auto& [num,pos]:adj[cur.first]){
        if(seen[num])continue;
        seen[num]=true;
        dfs({num,pos} , count+(pos<cur.second),seen);
    }
}
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        fill(adj,adj+n+1,VT<pair<ll,ll>>());
        for(ll i=1;i<n;i++){
            ll a,b;cin>>a>>b;
            adj[a].push_back({b,i});
            adj[b].push_back({a,i});
        }
        vector<bool> seen(n+1,false);
        ans=0;
        dfs({1,0},1,seen);
        cout<<ans<<endl;
    }
}