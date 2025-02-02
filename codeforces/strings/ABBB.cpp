#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;cin>>t;
    while(t--){
        string s;cin>>s;
        stack<char> st;
        for(char c:s){
            if(st.empty()){
                st.push(c);
                continue;
            }
            if(st.top()=='B' && c=='B'){
                st.pop();
            }
            else if(c=='B' && st.top()=='A'){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        cout<<st.size()<<endl;
    }
}