#include <bits/stdc++.h>
#define ll long long
#define VTL vector<ll>
#define VTB vector<bool>
#define VTC vector<char>
#define VTS vector<string>
#define VT vector
#define all(x) x.begin() , x.end()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define For(i , j) for(long long i=0;i<j;i++)
using namespace std;

int main() {
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        VTS arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        while(arr.size()){
            cout<<arr.back().find('#')+1<<' ';
            arr.pop_back();
        }
        cout<<"\n";
    }
}