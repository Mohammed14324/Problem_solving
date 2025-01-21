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

int main(){
    ll n;cin>>n;
    vector<ll> arr(n+1);
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(ll i=1;i<=n;i++){
        VTL count(n+1,0);
        ll current=i;
        while(++count[current]!=2){
            current=arr[current];
        }
        cout<<current<<' ';
    }
    cout<<"\n";
}