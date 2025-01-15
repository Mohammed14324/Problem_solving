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


int main(){
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        vector<VTL> arr(n,VTL(m));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        if(n==1 && m==1){
            cout<<"-1\n";
            continue;
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(i<n-1){
                    swap(arr[i+1][j],arr[i][j]);
                }
                else {
                    if(j!=m-1)swap(arr[i][j],arr[i][j+1]);
                }
            }
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cout<<arr[i][j]<<' ';
            }
            line;
        }
    }
}