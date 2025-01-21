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
    ll n,l;cin>>n>>l;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(all(arr));
    double maxx=LLONG_MIN;
    for(ll i=0;i<n-1;i++){
        maxx=max(maxx,(arr[i+1]-arr[i])/2.0);
    }
    maxx=max(maxx,(double)max(arr[0],(l-arr.back())));
    cout<<setprecision(10)<<maxx<<endl;
}