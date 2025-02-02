#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    string s;
    while(t--){
        cin>>n>>s;
        ll pos=s.find("()");
        while(pos!=string::npos){
            s.erase(pos , 2);
            pos=s.find("()");
        }
        cout<<s.length()/2<<endl;
    }
}