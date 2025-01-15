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
        ll n,k;cin>>n>>k;
        ll count=0;

        map<ll,ll> mp;
        for(ll i=0;i<k;i++){
            ll a,b;cin>>a>>b;
            mp[a]+=b;
        }
        priority_queue<ll ,vector<ll> >pq;
        for(pair<ll,ll> pr:mp){
            pq.push(pr.second);
        }
        while(n-- && pq.size()){
            count+=pq.top();
            pq.pop();
        }
        cout<<count<<endl;
            
    }
}