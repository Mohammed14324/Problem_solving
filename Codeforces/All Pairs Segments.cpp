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
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        VTL arr={-1};
        ll num;
        for(ll i=0;i<n;i++){
            cin>>num;
            arr.push_back(num);
        }
        map<ll,ll> mp;
        for(ll i=1;i<n;i++){
            
            ll ans=((n-i)*(i));
            mp[ans]+=((arr[i+1]-arr[i])-1);
            ans=(i-1)*(n-i);
            ans+=n-1;
            mp[ans]++;
        }
        mp[n-1]++;
        for(ll i=0;i<m;i++){
            cin>>num;
            cout<<mp[num]<<' ';
        }
        cout<<"\n";
    }
}