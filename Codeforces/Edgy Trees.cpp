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
const ll mod=(1e9)+7;

ll Pow(ll n,ll k){
    ll t=1;
    while(k>0){
        if(k%2==1){
            t=(t*n)%mod;
        }
        n=(n*n)%mod;
        k/=2;
    }
    return t;
  
}
vector<vector<pair<ll,ll>>> adj;
vector<bool> seen;

ll dfs(ll node){
    seen[node]=true;
    ll size=1;
    for(auto& edge :adj[node]){
        ll nig=edge.first;
        ll color= edge.second;
        if(!seen[nig]&&color==0){
            size+=dfs(nig);
        }
    }
    return size;
    
}

int main(){
    ll n,k;cin>>n>>k;
    adj.resize(n+1);
    seen.resize(n+1,false);
    for(ll i=0;i<n-1;i++){
        ll u,v,x;
        cin>>u>>v>>x;
        adj[u].emplace_back(v,x);
        adj[v].emplace_back(u,x);
        
    }
    ll total=Pow(n,k);
    ll badseq=0;
    
    for(int i=1; i<=n; i++){
        if(!seen[i]){
            ll cosize=dfs(i);
            badseq=(ll)(badseq+Pow(cosize,k))%mod;
            
        }
    }
    
    
    
    cout<< (total-badseq+mod)%mod<<endl;
    
    
    
}