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
        map<ll,ll> mp[2];
        ll n;cin>>n;
        ll arr[2]={0};
        for(ll i=0;i<n;i++){
            ll a,b;cin>>a>>b;
            arr[b]++;
            mp[b][a]=arr[b];
        }
        ll count=0;
        for(ll i=0;i<=n;i++){
            if(mp[0][i]>mp[0][i-1]){
                if(mp[1][i]>mp[1][i-1]){
                    count+=((arr[0]-1)+(arr[1]-1));
                }
                if(mp[1][i+1]>mp[1][i]){
                    if(mp[0][i+2]>mp[0][i+1]){
                        count++;
                    }
                }
            }
            if(mp[1][i]>mp[1][i-1]){
                if(mp[0][i+1]>mp[0][i]){
                    if(mp[1][i+2]>mp[1][i+1]){
                        count++;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
}