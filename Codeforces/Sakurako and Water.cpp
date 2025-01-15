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
        ll n;cin>>n;
        ll num;
        map<ll,ll> mp;
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
                cin>>num;
                mp[j-i]=min(mp[j-i],num);
            }
        }
        ll sum=0;
        for(ll i=0;i<=n;i+=1){
            sum+=abs(mp[i]);
            if(i!=0)sum+=abs(mp[0-i]);
        }
        cout<<sum<<endl;
    }
}