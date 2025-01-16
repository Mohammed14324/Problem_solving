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
void solve( VT<VTB>& seen,VTS& arr , ll i,ll j,ll n,ll m){
    seen[i][j]=true;
    if(i!=0 && !seen[i-1][j] && arr[i-1][j]!='#')
    solve(seen,arr,i-1,j,n,m);
    if(i<n-1 && !seen[i+1][j] && arr[i+1][j]!='#')
    solve(seen,arr,i+1,j  ,n, m);
    if(j<m-1 && !seen[i][j+1] && arr[i][j+1]!='#')
    solve(seen,arr,i,j+1 , n,m);
    if(j!=0 && !seen[i][j-1] && arr[i][j-1]!='#')
    solve(seen,arr,i,j-1, n,m);
}
int main(){
    ll n,m;cin>>n>>m;
    vector<string> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<VTB> seen(n,VTB(m,false));
    ll count=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(seen[i][j] or arr[i][j]=='#')continue;
            count++;
            solve(seen , arr , i , j,n,m);
        }
    }
    cout<<count<<"\n";
}
