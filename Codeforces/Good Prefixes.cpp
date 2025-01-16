#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll sum=0;
        ll maxx=0;
        ll num;
        ll count=0;
        for(ll i=0;i<n;i++){
            cin>>num;
            if(num>maxx){
                maxx=num;
            }
            sum+=num;
            if(maxx==(sum-maxx)){
                count++;
            }
        }
        cout<<count<<endl;
    }
}