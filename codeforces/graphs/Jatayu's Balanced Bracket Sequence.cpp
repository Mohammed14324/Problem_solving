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
        char c;
        ll count=0;
        ll ans=0;
        for(ll i=0;i<n*2;i++){
            cin>>c;
            if(c=='('){
                count=0;
            }
            else{
                ans+=count;
                count=1;
            }
        }
        cout<<ans+1<<endl;
    }
}