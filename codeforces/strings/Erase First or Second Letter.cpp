#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string s;
        cin>>s;
        map<char ,bool> mp;
        ll count=0;
        ll l=0;
        for(ll i=0;i<n;i++){
            if(!mp[s[i]]){
                mp[s[i]]=true;
                l++;
            }
            count+=l;
        }
        
        cout<<count<<endl;
    }
}