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
        ll a=0;
        ll b=0;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(all(arr));
        for(ll i=n-1;i>0 ;i-=2){
            if(m<(arr[i]-arr[i-1])){
                arr[i-1]+=m;
                m=0;
                break;
            }
            m-=arr[i]-arr[i-1];
            arr[i-1]=arr[i];
        }
        while(arr.size()){
            a+=arr.back();
            arr.pop_back();
            if(arr.size()){
                b+=arr.back();
                arr.pop_back();
            }
        }
        cout<<a-b<<endl;
    }
}