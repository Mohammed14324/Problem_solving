#include <bits/stdc++.h>
using ll=long long;
using namespace std;
int main(){
    ll m,n;
    cin>>m>>n;
    map<string,string>mp;
    string a,b;
    while(n--){
        cin>>a>>b;
        if(a.length()>b.length()){
            mp[a]=b;
        }
        else{
            mp[a]=a;
        }
    }
    string ans="";
    while(m--){
        cin>>a;
        ans+=mp[a]+" ";
    }
    cout<<ans;
}