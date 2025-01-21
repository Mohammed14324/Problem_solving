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
const ll N=1e6;


int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> arr(n+1);
        vector<ll> ind(n+1);
        for(ll i=1;i<=n;i++){
            cin>>arr[i];
            ind[arr[i]]=i;
        }
        ll ans=0;
        vector<bool> seen(n+1,false);
        for(ll i=1;i<=n;i++){
            if(seen[i])continue;
            ll count=0;
            ll j=i;
            while(!seen[j]){
                seen[j]=true;
                j=arr[j];
                count++;
            }
            ans+=(count-1)/2;
        }
        cout<<(ans)<<endl;
    }
}