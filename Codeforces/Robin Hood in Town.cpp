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
        ll n ;cin>>n;
        vector<ll>arr(n);
        ll sum=0;
        For(i,n){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(n<=2){
            cout<<"-1\n";
            continue;
        }
        sort(arr.begin() , arr.end());
        ll maxx=arr[n/2];
        ll should=(maxx*(n*2))+1;
        cout<<max((ll)0,should-sum)<<endl;
    }
}