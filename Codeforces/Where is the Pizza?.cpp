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
        fill(adj,adj+n+1,VTL());
        VT<VTL> arr(3,VTL(n));
        for(ll i=0;i<3;i++){
            for(ll j=0;j<n;j++){
                cin>>arr[i][j];
                adj[arr[i][j]].push_back(j);
            }
        }
        vector<ll> seen(n,false);
        ll count=0;
        for(ll i=0;i<n;i++){
            if(!seen[i]){
                seen[i]=true;
                if(arr[0][i]==arr[1][i])continue;
                bool flag=false;
                queue<ll> que;
                que.push(arr[0][i]);
                que.push(arr[1][i]);
                while(que.size()){
                    ll cur=que.front();
                    que.pop();
                    for(ll ind:adj[cur]){
                        if(!seen[ind]){
                            seen[ind]=true;
                            que.push(arr[0][ind]);
                            que.push(arr[1][ind]);
                        }
                        if(arr[2][ind]!=0){
                            flag=true;
                        }
                    }
                }
                if(!flag){
                    count++;
                }
            }
        }
        cout<<Pow(2,count)<<endl;
    }
}