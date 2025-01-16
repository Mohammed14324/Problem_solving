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
const ll N=1e18;
int main(){
    ll n,m,c;cin>>n>>m>>c;
    vector<vector<ll>> arr(n+1,vector<ll>(n+1,N));
    for(ll i=1;i<=n;i++){
        arr[i][i]=0;
    }
    for(ll i=0;i<m;i++){
        ll a,b,d;cin>>a>>b>>d;
        arr[a][b]=min(arr[a][b],d);
        arr[b][a]=min(arr[b][a],d);
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            for(ll k=1;k<=n;k++){
                arr[j][k]=min(arr[j][k],arr[i][k]+arr[j][i]);
            }
        }
    }
    for(ll i=0;i<c;i++){
        ll a,b;cin>>a>>b;
        if(arr[a][b]>=N){
            cout<<"-1\n";
            continue;
        }
        cout<<arr[a][b]<<endl;
    }
}
// min([i][j],[i][k]+[k][j])
