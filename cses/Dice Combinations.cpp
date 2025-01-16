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
int main(){
    ll n;cin>>n;
    ll arr[n+1];
    arr[1]=1;
    for(ll i=2;i<=6 && i<=n;i++){
        ll count=1;
        for(ll j=1;j<i;j++){
            count+=arr[j];
        }
        arr[i]=count;
    }
    for(ll i=7;i<=n;i++){
        ll count=0;
        for(ll j=i-6;j<i;j++){
            count+=arr[j];
            count%=mod;
        }
        arr[i]=count;
    }
    cout<<arr[n]<<endl;
}