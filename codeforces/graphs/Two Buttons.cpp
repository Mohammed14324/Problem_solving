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
ll minn=LLONG_MAX;
ll v[N];
void solve(ll n,ll m,ll count){
    if(count > v[n])return;
    v[n]=count;
    if(count>minn | n<=0){
        return;
    }
    if(n>=m){
        count+=n-m;
        if(count<minn){
            minn=count;
        }
        return;
    }
    solve(n-1,m,count+1);
    solve(n*2,m,count+1);
}
int main(){
    ll n,m;cin>>n>>m;
    fill(v,v+N,N);
    solve(n,m,0);
    cout<<minn<<endl;
}