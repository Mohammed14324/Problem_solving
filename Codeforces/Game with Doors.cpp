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
        ll a1,b1,a2,b2;cin>>a1>>b1>>a2>>b2;
        if(a1>=b2 | a2>=b1){
            cout<<1+(b2==a1)+(b1==a2)<<endl;
            continue;
        }
        ll div=(min(b1,b2)-max(a1,a2));
        div+=(b1!=b2)+(a1!=a2);
        cout<<div<<endl;
    }
}