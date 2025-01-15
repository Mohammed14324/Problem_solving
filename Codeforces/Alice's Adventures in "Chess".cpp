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

void move(char c,ll& x,ll& y){
    if(c=='N'){
        y++;
    }
    else if(c=='S'){
        y--;
    }
    else if(c=='E'){
        x++;
    }
    else{
        x--;
    }
}

int main(){
    ll t;cin>>t;
    while(t--){
        ll n,a,b;cin>>n>>a>>b;
        string s;cin>>s;
        bool can=false;
        ll x=0,y=0;
        if(a!=0 || b!=0)
        for(ll i=0;i<20 && !can;i++){
            for(char c:s){
                move(c,x,y);
                if(x==a && y==b){
                    can=true;
                    break;
                }
            }
        }
        else{
            can=true;
        }
        if(can){
            YES;
        }
        else{
            NO;
        }
    }
}