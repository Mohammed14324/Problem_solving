#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll lcm(ll n,ll m){
    return (n*m)/gcd(n,m);
}
string multi(ll n,string s){
    string ans="";
    for(ll i=0;i<n;i++){
        ans+=s;
    }
    return ans;
}
int main() {
    ll t;cin>>t;
    while(t--){
        string a,b;cin>>a>>b;
        ll lc=lcm(a.length() , b.length());
        string s=multi(lc/a.length(),a);
        string t=multi(lc/b.length(),b);
        if(s==t){
            cout<<s+"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}