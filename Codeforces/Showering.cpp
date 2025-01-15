#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n,s,k;cin>>n>>s>>k;
        ll r,l;
        ll last=0;
        bool are=false;
        vector<pair<ll,ll>> vt(n);
        for(ll i=0;i<n ;i++){
            cin>>vt[i].first>>vt[i].second;
        }
        sort(vt.begin(),vt.end());
        for(ll i=0;i<n;i++){
            l=vt[i].first;
            r=vt[i].second;
            if((l-last)>=s){
                are=true;
                break;
            }
            last=r;
        }
        if((k-r)>=s)are=true;
        cout<<(are?"YES\n":"NO\n");
    }
}