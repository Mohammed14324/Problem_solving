#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string s;cin>>s;
        cout<<(s.back()!=s.front()?"YES\n":"NO\n");
    }
}