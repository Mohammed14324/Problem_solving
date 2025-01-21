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
const ll N=1e5;
vector<ll> adj[N+1];
double dfs(ll cur,ll grand){
    double sum=0;
    double count=0;
    for(ll node:adj[cur]){
        if(node!=grand){
            sum+=dfs(node,cur);
            count++;
        }
    }
    if(count){
        return  (sum/count)+1;
    }
    return 1;
}
int main(){
    ll n;cin>>n;
    for(ll i=1;i<n;i++){
        ll a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout<<fixed<<setprecision(15)<<dfs(1,0)-1<<endl;
}