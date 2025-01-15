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
        ll n,m;cin>>n>>m;
        ll sum=0;
        ll count=0;
        for(ll i=0;i<n;i++){
            ll num;cin>>num;
            if(num>=m)sum+=num;
            else if(sum && num==0){
                sum--;
                count++;
            }
        }
        cout<<count<<endl;
    }
}