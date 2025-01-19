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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define Yes cout<<"Yes\n";
#define No cout<<"No\n";
#define yes cout<<"yes\n";
#define no cout<<"no\n";
#define line cout<<'\n';
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> arr(n);
        for(ll& i:arr){
            cin>>i;
        }
        bool can=true;
        ll count=0;
        for(ll i=1;i<n && can;i*=2){
            for(ll j=0;j<n-i;j+=(i*2)){
                if(abs(arr[j]-arr[i+j])!=i){
                    can=false;
                    break;
                }
                if(arr[j] > arr[i+j]){
                    swap(arr[j],arr[i+j]);
                    count++;
                }
            }
        }
        if(can){
            cout<<count<<endl;
        }
        else{
            cout<<"-1\n";
        }
    }
}