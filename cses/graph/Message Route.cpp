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
vector<ll> adj[N];
ll parent[N];
ll dis[N];
int main(){
    ll n,m;cin>>n>>m;
    fill(parent,parent+n+1,-1 );
    fill(dis,dis+n+1,LLONG_MAX );
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    queue<ll> que;
    que.push(1);
    dis[1]=0;
    while(que.size()){
        ll node=que.front();
        que.pop();
        for(ll i:adj[node]){
            if(dis[node]+1<dis[i]){
                que.push(i);
                dis[i]=dis[node]+1;
                parent[i]=node;
            }
        }
    }
    if(parent[n]==-1){
        cout<<"IMPOSSIBLE\n";
        return 0;
    }
    vector<ll> ans;
    ll cur=n;
    while(cur!=1){
        ans.push_back(cur);
        cur=parent[cur];
    }
    cout<<ans.size()+1<<endl;
    cout<<"1 ";
    while(ans.size()){
        cout<<ans.back()<<' ';
        ans.pop_back();
    }
    line;
}
