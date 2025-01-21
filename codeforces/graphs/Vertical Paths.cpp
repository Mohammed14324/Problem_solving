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
#define line cout<<'\n';

const ll N=1e6;
int c[N];
int parent[N];
bool v[N];
void dfs(ll node, ll l){
    v[node]=true;
    if(node!= parent[node] && !v[parent[node]]){
        dfs(parent[node],l+1);
    }
    else{
        cout<<l<<endl;
    }
    cout<<node<<' ';
}
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        fill(c, c+n+1,0);
        fill(v, v+n+1,false);
        ll count=n;
        for(ll i=1;i<=n;i++){
            cin>>parent[i];
            
            if(i!=parent[i]) count-=!c[parent[i]]++;
        }
        cout<<count<<endl;
        for(ll i=1;i<=n;i++){
            if(c[i]==0){
                dfs(i,1);
                line;
            }
        }
        line;
    }
}