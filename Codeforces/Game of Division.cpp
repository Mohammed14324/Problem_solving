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
        ll n,k;cin>>n>>k;
        vector<ll> arr(n);
  
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            
        }
        ll ind;
        bool can2=false;
        map<ll,bool> mp;
        for(ll i=0;i<n;i++){
            bool can=true;
            for(ll j=i+1;j<n;j++){
                if(abs(arr[i]-arr[j])%k==0 ){
                    can=false;
                    mp[j]=true;
                }
                
            }
            if(can && !mp[i]){
                can2=true;
                ind=i+1;
                break;
            }
        }
        if(!can2){
            NO;
        }
        else{
            YES;
            cout<<ind<<endl;
        }
    }
}