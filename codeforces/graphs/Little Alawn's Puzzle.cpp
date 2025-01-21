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
const ll N=(1e6)+1;
vector<ll> adj[N];
const ll mod=1e9+7;
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
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<VTL> arr(2,VTL(n+1));
        fill(adj,adj+n+1,VTL());
        for(ll i=0;i<2;i++){
            for(ll j=0;j<n;j++){
                cin>>arr[i][j];
                adj[arr[i][j]].push_back(j);
            }
        }
        ll count=0;
        vector<bool> seen(n,false);
        
        for(ll i=0;i<n;i++){
            if(!seen[i]){
                queue<ll> que;
                count++;
                que.push(arr[0][i]);
                que.push(arr[1][i]);
                while(que.size()){
                    ll node=que.front();
                    que.pop();
                    for(ll j:adj[node]){
                        if(!seen[j]){
                            seen[j]=true;
                            que.push(arr[0][j]);
                            que.push(arr[1][j]);
                        }
                    }
                }
            }
        }
        cout<<Pow(2,count)%mod<<endl;
    }
}