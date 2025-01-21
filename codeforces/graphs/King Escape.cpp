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
    ll xa,ya,xb,yb,xc,yc;cin>>xa>>ya>>xb>>yb>>xc>>yc;
    bool can=true;
    if(!((xb>xa && xc>xa ) | (xb<xa && xc<xa ))){
        can=false;
    }
    if(!((yb>ya && yc>ya ) | (yb<ya && yc<ya ))){
        can=false;
    }
    if(can){YES;}
    else {NO;}
}