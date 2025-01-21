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

ll solve(map<ll,ll>& mp , VTL& arr , ll index){
    if(index>=arr.size())return index;
    if(mp[index])return mp[index];
    ll num=solve(mp,arr,index+arr[index]);
    return mp[index]=num;
}
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        VTL arr(n+1);
        for(ll i=1;i<=n;i++){
            cin>>arr[i];
        }
        map<ll,ll> mp;
        ll maxx=LLONG_MIN;
        for(ll i=1;i<=n;i++){
            maxx=max(maxx,solve(mp,arr , i)-i);
        }
        cout<<maxx<<endl;
    }
}