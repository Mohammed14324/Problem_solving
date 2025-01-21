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

ll solve(VT<VTL>& arr,VT<VTB>& seen , ll n,ll m,ll i,ll j){
    if(seen[i][j] or !arr[i][j])return 0;
    ll num=arr[i][j];
    seen[i][j]=true;
    if(i!=0){
        num+=solve( arr, seen , n, m, i-1, j);
    }
    if(j!=0){
        num+=solve( arr, seen ,  n, m, i, j-1);
    }
    if(i<n-1){
        num+=solve( arr, seen ,  n, m,i+1, j);
    }
    if(j<m-1){
        num+=solve(arr, seen , n,m, i,j+1);
    }
    return num;
}
int main(){
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        VT<VTL> arr(n+1 , VTL(m+1));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        VT<VTB> seen(n+1 , VTB(m+1,false));
        ll maxx=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(!seen[i][j]){
                    maxx=max(maxx,solve(arr, seen, n, m, i, j));
                }
            }
        }
        cout<<maxx<<endl;
    }
}