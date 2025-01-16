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
const ll N=2e5+5;
vector<ll> adj[N];
ll team[N];
int main(){
    ll n,m;cin>>n>>m;
    fill(team,team+n+1,0);
    for(ll i=0;i<m;i++){
        ll a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    queue<ll> que;
    bool can=true;
    for(ll i=1;i<=n && can;i++){
        if(team[i]==0){
            team[i]=1;
            que.push(i);
            while(que.size() && can){
                ll node=que.front();
                que.pop();
                while(adj[node].size()){
                    ll next=adj[node].back();
                    adj[node].pop_back();
                    if(team[next]==team[node]){
                        can=false;
                        break;
                    }
                    
                    if(team[next]==0){
                        team[next]=3-team[node];
                        que.push(next);
                    }
                }
            }
        }
    }
    if(!can){
        cout<<"IMPOSSIBLE\n";
    }
    else{
        for(ll i=1;i<=n;i++){
            cout<<team[i]<<' ';
        }
    }
    line;
}
