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
const ll N=1e5+1;
vector<pair<ll,ll>> adj[N];
ll parent[N];
ll dis[N];
int main(){
    ll n,m;cin>>n>>m;
    fill(parent,parent+n+1,-1 );
    fill(dis,dis+n+1,LLONG_MAX );
    for(ll i=0;i<m;i++){
        ll a,b,x;
        cin>>a>>b>>x;
        adj[a].push_back({x,b});
    }
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>  , greater<pair<ll,ll>>>que;
    que.push({0,1});
    dis[1]=0;
    while(que.size()){
        auto[x,cur]=que.top();
        que.pop();
        if(dis[cur]<x){
            continue;
        }
        for(pair<ll,ll> node:adj[cur]){
            if(dis[node.second]>x+node.first){
                que.push({dis[node.second]=x+node.first,node.second});
            }
        }
    }
    for(ll i=1;i<=n;i++){
        cout<<dis[i]<<' ';
    }
    line;
}
