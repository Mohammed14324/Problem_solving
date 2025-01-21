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
class DUS{
public:
    vector<ll> parent;
    vector<ll> rank;
    DUS(ll n){
        parent.resize(n);
        for(ll i=0;i<n;i++){
            parent[i]=i;
        }
        rank.resize(n+1,1);
    }
    ll find(ll n){
        if(parent[n]==n){
            return n;
        }
        return parent[n]=find(parent[n]);
        
    }
    bool unite(ll u,ll v){
        ll pu=find(u);
        ll pv=find(v);
        if(pu!=pv){
            if(rank[pu]>rank[pv]){
                parent[pv]=pu;
                
            }
            else if(rank[pu]<rank[pv]){
                parent[pu]=pv;
                
            }
            else{
                parent[pu]=pv;
                rank[pu]++;
            }
            return true;
        }
        return false;
    }
};
int main(){
    ll t,a,b;cin>>t>>a>>b;
    DUS mocha(t),diana(t);
    for(ll i=0;i<a;i++){
        ll u,v;cin>>u>>v;
        mocha.unite(u-1, v-1);
    }
    for(ll i=0;i<b;i++){
        ll u,v;cin>>u>>v;
        diana.unite(u-1, v-1);
    }
    vector<pair<ll,ll>> ans;
    for(ll i=0;i<t;i++){
        for(ll j=i+1;j<t;j++){
            if(mocha.find(i)!=mocha.find(j) && diana.find(i)!=diana.find(j)){
                ans.push_back({i+1,j+1});
                mocha.unite(i,j);
                diana.unite(i,j);
            }
        }
    }
    cout<<ans.size()<<endl;
    for(pair<ll,ll> pr: ans){
        cout<<pr.first<<' '<<pr.second<<endl;
    }
}