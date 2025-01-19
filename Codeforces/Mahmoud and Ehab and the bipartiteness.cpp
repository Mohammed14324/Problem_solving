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
ll Log(ll n,ll m){
    return log(m)/log(n);
}
const ll N=1e5+1;
vector<ll> adj[N];
ll team[N];
ll team1=0,team2=0;
void solve(ll start , ll cur_team){
    team[start]=cur_team;
    if(cur_team==1){
        team1++;
        for(ll i:adj[start]){
            if(team[i]==0)
                solve(i,2);
        }
    }
    else{
        team2++;
        for(ll i:adj[start]){
            if(team[i]==0)
                solve(i,1);
        }
    }
}
int main(){
    ll n;cin>>n;
    fill(team,team+N,0);
    for(ll i=0;i<n-1;i++){
        ll a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ll count=0;
    for(ll i=1;i<=n;i++){
        if(team[i]==0){
            solve(i,1);
        }
    }
    ll num1=0;
    for(ll i=1;i<=n;i++){
        if(team[i]==1){
            count+=team2-adj[i].size();
        }
        else if(team[i]==2){
            count+=team1-adj[i].size();
        }
    }
    cout<<count/2<<endl;
}