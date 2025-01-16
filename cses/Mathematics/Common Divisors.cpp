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
ll mp[1000000];
void solve(){
    ll maxx=1;
    for(ll i=2;i<=1000000;i++){
        ll count=0;
        for(ll j=i;j<=1000000;j+=i){
            if(mp[j])count+=mp[j];
        }
        if(count>=2)maxx=i;
    }
    cout<<maxx<<endl;
}
int main(){
    ll n;cin>>n;
    fill(mp,mp+1000000,0);
    for(ll i=0;i<n;i++){
        ll num;cin>>num;
        mp[num]++;
    }
    solve();
    
}
