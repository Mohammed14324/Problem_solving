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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define Yes cout<<"Yes\n";
#define No cout<<"No\n";
#define yes cout<<"yes\n";
#define no cout<<"no\n";

const ll N=1e5+1;
vector<ll> adj[N];
ll parent[N];
bool vis[N];
 
bool dfs(ll& start ,ll& end , ll current_parent  , ll current){
    parent[current]=current_parent;
    vis[current]=true;
    for(ll i:adj[current]){
        if(!vis[i]){
            if(dfs(start,end,current , i))return true;
        }
        else if(i!=current_parent){
            start=i;
            end=current;
            return true;
        }
            
    }
    return false;
}
int main(){
    ll n,m;cin>>n>>m;
    ll start=-1;
    ll end=-1;
    memset(vis,false,N);
    memset(parent,-1,N);
    for(ll i=0;i<m;i++){
        ll a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(ll i=1;i<=n;i++){
        if(!vis[i]){
            if( dfs(start,end,-1,i)){
                break;
            }
        }
    }
    if(start==-1){
        cout<<"IMPOSSIBLE\n";
        return 0;
    }
    VTL ans;
    ans.push_back(start);
    for(ll i=end;i!=start;i=parent[i]){
        ans.push_back(i);
    }
    ans.push_back(start);
    cout<<ans.size()<<'\n';
    while(ans.size()){
        cout<<ans.back()<<' ';
        ans.pop_back();
    }
    cout<<"\n";
}
