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


int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        if(n==1 || n==3){
            cout<<"-1\n";
            continue;
        }
        if(n==4){
            cout<<"3366\n";
            continue;
        }
        if(n==2){
            cout<<"66\n";
            continue;
        }
        string s="";
        for(ll i=0;i<n;i++){
            s+='3';
        }
        s[s.length()-1]=s[s.length()-2]='6';
        if(n%2){
            s[s.length()-4]='6';
        }
        cout<<s<<endl;
    }
}