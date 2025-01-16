#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vt) vt.begin(),vt.end()
#define For(i,n) for(ll i=0;i<n;i++)
#define VTL vector<ll>
#define VT vector
#define VTB vector<bool>
#define VTS vector<string>
#define VTC vector<char>
#define VTI vector<int>
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define line cout<<'\n'


int main() {
    ll t;
    cin >> t;
    while (t--) {
        string s;cin>>s;
        ll pos=-1;
        for(ll i=0;i<s.length();i++){
            if(s[i]=='1' && pos==-1){
                pos=i+1;
            }
        }
        ll count=0;
        if(pos!=-1)
        for(ll i=pos-1;i<s.length();i++){
            if(s[i]=='0'){
                count+=(i+2)-pos;
                pos++;
            }
        }
        cout<<count<<endl;
    }
}