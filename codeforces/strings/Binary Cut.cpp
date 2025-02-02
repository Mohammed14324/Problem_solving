#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,w,a,b,c;cin>>t;
    string s;
    while(t--){
        cin>>s;
        string ss=s;
        ll pos=s.find('1');
        ll count=0;
        if(pos!=string::npos){
            s=s.substr(pos);
            bool are=false;
            for(char c:s){
                if(c=='0'&& !are){
                    count++;
                    are=true;
                }
                else if(are && c=='0'){
                }
                else if(c=='1'){
                    are=false;
                }
            }
            count*=2;
            if(s[s.length()-1]=='0')count--;
            if(ss[0]=='1'&&ss.find("01")!=string::npos)count--;
        }
        cout<<count+1<<endl;
    }
}