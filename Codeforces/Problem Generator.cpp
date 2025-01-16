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
        int n,m;cin>>n>>m;
        map<char ,int> mp;
        string s;cin>>s;
        for(char c:s){
            mp[c]++;
        }
        int count=max(0,m-mp['A']);
        count+=max(0,m-mp['B']);
        count+=max(0,m-mp['C']);
        count+=max(0,m-mp['D']);
        count+=max(0,m-mp['E']);
        count+=max(0,m-mp['F']);
        count+=max(0,m-mp['G']);
        cout<<count<<endl;
    }
}