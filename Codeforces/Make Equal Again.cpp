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
        ll n;cin>>n;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll left=0;ll right=n-1;
        if(n==1){
            zero;
            continue;
        }
        for(ll i=1;i<right;i++){
            if(arr[i]==arr[i-1]){
                left=i;
            }
            else{
                break;
            }
        }
        for(ll i=n-2;i>left;i--){
            if(arr[i]==arr[i+1]){
                right=i;
            }
            else{
                break;
            }
        }
        if(arr.back()==arr.front()){
            cout<<(right-left)-1<<endl;
        }
        else{
            cout<<min(right,n-(left+1))<<endl;
        }
    }
}