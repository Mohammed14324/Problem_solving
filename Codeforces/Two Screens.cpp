#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;cin>>t;
    while(t--){
        string a,b;cin>>a>>b;
        ll count=0;
        for(ll i=0;i<a.length() && i<b.length();i++){
            if(a[i]==b[i]){
                count++;
            }
            else{
                break;
            }
        }
        cout<<a.length()+b.length()-(max(count-1,(ll)0))<<endl;
    }
}