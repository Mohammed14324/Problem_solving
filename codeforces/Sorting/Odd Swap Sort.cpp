#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll arr[2]={0};
        ll num;
        bool can=true;
        for(ll i=0;i<n ;i++){
            cin>>num;
            if(num<arr[num&1]){
                can=false;
                string v;
                getline(cin,v);
                break;
            }
            arr[num&1]=num;
        }
        cout<<(can?"YES\n":"NO\n");
    }
}