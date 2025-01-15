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

template<typename T>
void display(vector<T> vt){for(T i:vt){cout<<i<<' ';}line;}

template<typename T>
void get(vector<T>& vt){for(T& i:vt){cin>>i;}}

int main() {
    ll n;cin>>n;
    map<char,ll> mp;
    for(ll i=0;i<n;i++){
        char c;cin>>c;
        mp[c]++;
    }
    ll m=min(mp['o'],min(mp['e'],mp['n']));
    for(ll i=0;i<m;i++){
        cout<<"1 ";
    }
    mp['o']-=m;
    mp['n']-=m;
    mp['e']-=m;
    m=min(min(mp['z'],mp['e']),min(mp['r'],mp['o']));
    for(ll i=0;i<m;i++){
        cout<<"0 ";
    }
    line;
}

