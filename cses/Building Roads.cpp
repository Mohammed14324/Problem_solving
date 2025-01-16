#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
void solve(VTB& seen , ll current , VT<VTL>& arr){
    if(seen[current])return ;
    seen[current]=true;
    for(ll i:arr[current]){
        solve(seen , i,arr);
    }
}
int main(){
    ll n,m;cin>>n>>m;
    vector<VTL> arr(n+1);
    for(ll i=0;i<m;i++){
        ll a,b;cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    VTL ans;
    vector<bool> seen(n+1,false);
    for(ll i=1;i<=n;i++){
        if(!seen[i]){
            ans.push_back(i);
            solve(seen , i,arr);
        }
    }
    cout<<ans.size()-1<<"\n";
    if(ans.size()==0)return 0;
    for(ll i=1;i<ans.size();i++){
        cout<<ans[i-1]<<' '<<ans[i]<<"\n";
    }
}
