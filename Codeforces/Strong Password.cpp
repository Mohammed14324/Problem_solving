#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;cin>>n;
    while(n--){
        string s;cin>>s;
        bool seen=false;
        char last='1';
        for(char c:s){
            if(last!='1' && !seen){
                if(c==last){
                    seen=true;
                    cout<<(c!='z'?char(c+1):char(c-1))<<c;
                }
                else{
                    cout<<c;
                }
            }
            else{
                cout<<c;
            }
            last=c;
            
        }
        if(!seen){
            cout<<(last!='z'?char(last+1):char(last-1));
        }
        cout<<"\n";
    }
}