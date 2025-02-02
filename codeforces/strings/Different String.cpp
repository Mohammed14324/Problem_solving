#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    string s;
    while(t--){
        cin>>s;
        char cc=s[0];
        char f;
        bool are=false;
        for(ll i=0;i<s.length();i++){
            if(s[i]!=cc){
                are=true;
                f=s[i];
                s.erase(i,1);
                break;
            }
        }
        if(are){
            cout<<"YES"<<endl<<f<<s<<endl;
        }
        else cout<<"NO"<<endl;
    }
}