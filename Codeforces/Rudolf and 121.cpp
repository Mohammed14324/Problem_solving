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
#define zero cout<<"0\n"

int main(){
    ll t;cin>>t;
    while(t--){
        ll pos,n;cin>>n;
        pos=1;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        bool can=true;
        for(ll i=1;i<n-1;i++){

            arr[i]-=arr[i-1]*2;
            arr[i+1]-=arr[i-1];
            arr[i-1]=0;
            if(arr[i]<0){
                can=false;
                continue;
            }
        }
        for(ll i=0;i<n;i++){
            can&=arr[i]==0;
        }
        if(can && arr.back()==0){
            YES;
        }
        else{
            NO;
        }
    }
}