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
#define zero cout<<"0\n"

int main(){
    ll t;cin>>t;
    while(t--){
        string s;cin>>s;
        if(s[0]!='1'){
            No;
            continue;
        }
        ll pos=s.length()-1;
        for(ll i=1;i<s.length();i++){
            if(s[i]!='0'){
                pos=i;
                break;
            }
        }
        if(stol(s.substr(pos))<=1 || pos!=2){
            No;
            continue;
        }
        Yes;
    }
}