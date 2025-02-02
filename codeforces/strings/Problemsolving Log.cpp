#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while (t--) {
        ll n;cin>>n;
        vector<ll> vt(27 ,0);
        ll count=0;
        for(ll i=0;i<n;i++){
            char c;cin>>c;
            ll j=(c-'A')+1;
            if(++vt[j]==j){
                count++;
            }
        }
        cout<<count<<endl;
    }
}