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
        ll n;cin>>n;
        ll max1=LLONG_MIN;
        ll max2=LLONG_MIN;
        ll num;
        for(ll i=1;i<=n;i++){
            cin>>num;
            if(i%2!=0){
                max1=max(max1,num);
            }
            else{
                
                max2=max(max2,num);
            }
        }
        cout<<max(max1+((n/2)+(n%2)),max2+(n/2))<<endl;
    }
}