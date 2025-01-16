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
    ll n;cin>>n;
    vector<bool> arr(n+1,false);
    for(ll i=1;i<n;i++){
        ll num;cin>>num;
        arr[num]=true;
    }
    for(ll i=1;i<=n;i++){
        if(!arr[i]){
            cout<<i<<endl;
            return 0;
        }
    }
}