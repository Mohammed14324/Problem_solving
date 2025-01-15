#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        ll maxx=0;
        ll sum=0;
        for(ll i=0;i<n;i++){
            ll num;cin>>num;
            maxx=max(maxx,num);
            sum+=num;
        }
        cout<<max(maxx,(ll)(sum/m)+(min((ll)1,(ll)sum%m)))<<endl;
    }
}