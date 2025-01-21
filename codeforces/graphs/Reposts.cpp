#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(ll i=0;i<n;i++)
#define VTL vector<ll>
#define VT vector
#define VTB vector<bool>
#define VTS vector<string>
#define VTC vector<char>
#define VTI vector<int>
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define Yes cout<<"Yes\n";
#define No cout<<"No\n";
#define yes cout<<"yes\n";
#define no cout<<"no\n";
int main(){
    ll n;cin>>n;
    map<string,ll> mp;
    ll maxx=0;
    for(ll i=0;i<n;i++){
        string a,b,c;cin>>a>>b>>c;
        transform(a.begin() , a.end() , a.begin() , ::tolower);
        transform(c.begin() , c.end() , c.begin() , ::tolower);
        maxx=max(maxx ,mp[a]=mp[c]+1);
    }
    cout<<maxx+1<<endl;
}
 