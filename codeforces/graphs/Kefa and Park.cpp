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
map<ll,bool> mp;
vector<ll> adj[N];
ll ans;

void dfs(ll cur,ll grand,ll count,ll maxx){
    if(mp[cur]){
        count++;
    }
    else{
        count=0;
    }
    if(count>maxx)return ;
    if(adj[cur].size()==1 && cur!=1){
        ans++;
        return;
    }
    for(ll num:adj[cur]){
        if(num!=grand){
            dfs(num,cur,count,maxx);
        }
    }
}


int main(){
    ans=0;
    ll n,m;cin>>n>>m;
    for(ll i=1;i<=n;i++){
        ll num;cin>>num;
        mp[i]=num;
    }
    for(ll i=1;i<n;i++){
        ll a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,-1,0,m);
    cout<<ans<<endl;
}