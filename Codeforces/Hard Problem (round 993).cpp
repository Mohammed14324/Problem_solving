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
        ll m,a,b,c;cin>>m>>a>>b>>c;
        ll count=0;
        if(a>=m){
            count+=m;
        }
        else{
            count+=a;
            count+=min(m-a,c);
            c=max((ll)0,c-(m-a));
        }if(b>=m){
            count+=m;
        }
        else{
            count+=b;
            count+=min(m-b,c);
            c=max((ll)0,c-(m-b));
        }
        cout<<count<<endl;
    }
}