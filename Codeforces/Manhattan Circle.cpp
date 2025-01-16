#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t,x,y;
    cin>>t;
    string s;
    while(t--){
        cin>>x>>y;
        string arr[x];
        ll mx=0;
        ll my=0;
        ll cx=0;
        ll cy=0;
        for(ll i=0;i<x;i++){
            cin>>arr[i];
            ll co=count(arr[i].begin(),arr[i].end(),'#');
            if(co>cx){
                cx=co;
                mx=i+1;
            }
        }
        for(ll i=0;i<y;i++){
            ll co=0;
            for(ll j=0;j<x;j++){
                if(arr[j][i]=='#'){
                    co++;
                }
            }
            if(co>cy){
                cy=co;
                my=i+1;
            }
        }
        cout<<mx<<' '<<my<<endl;
    }
}