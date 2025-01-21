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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define Yes cout<<"Yes\n";
#define No cout<<"No\n";
#define yes cout<<"yes\n";
#define no cout<<"no\n";
#define line cout<<'\n';

const ll N=1e6;
vector<bool> arr(181,false);
void solve(){
    for(ll i=3;i<=360;i++){
        ll d=((i-2)*180);
        if(d%i==0)arr[d/i]=true;
    }
}
int main(){
    map<ll,ll> mp;
    ll n;cin>>n;
    vector<ll> arr(n);
    ll minn=LLONG_MAX;
    ll maxx=LLONG_MIN;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
        minn=min(minn,arr[i]);
        maxx=max(maxx,arr[i]);
    }
    maxx-=minn;
    ll count=0;
    for(ll i:arr){
        if(maxx==0){
            count+=mp[i]-1;
        }
        else {
            count+=mp[i-maxx];
            count+=mp[maxx+i];
        }
    }
    cout<<maxx<<' '<<count/2<<endl;
}