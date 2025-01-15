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
    ll  t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<pair<ll,ll>> arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i].first>>arr[i].second;
        }
        ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
        ll minn=LLONG_MAX;
        for(ll i=0;i<n;i++){
            ll cur=((abs(arr[i].first-x2)*abs(arr[i].first-x2))+(abs(arr[i].second-y2)*abs(arr[i].second-y2)));
            minn=min(minn,cur);
        }
        if(minn<=((abs(x1-x2)*abs(x1-x2))+(abs(y1-y2)*abs(y1-y2)))){
            NO;
        }
        else{
            YES;
        }
    }
}