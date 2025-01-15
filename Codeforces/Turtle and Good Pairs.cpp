#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> vt(26,0);
        char c;
        for(ll i=0;i<n;i++){
            cin>>c;
            vt[c-'a']++;
        }
        bool are=true;
        while(are){
            are=false;
            ll maxx=LLONG_MIN;
            ll j;
            for(ll i=0;i<26;i++){
                if(vt[i]){
                    if(vt[i]>maxx){
                        maxx=vt[i];
                        j=i;
                        are=true;
                    }
                }
            }
            if(are){
                vt[j]--;
                cout<<char(j+'a');
            }
        }
        cout<<"\n";
    }
}