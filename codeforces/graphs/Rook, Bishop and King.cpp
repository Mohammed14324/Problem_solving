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

int main(){
    ll r1,c1,r2,c2;cin>>r1>>c1>>r2>>c2;
    if(r1==r2 | c1==c2){
        cout<<"1 ";
    }
    else{
        cout<<"2 ";
    }
    if(((r1+c1)%2)!=((r2+c2)%2)){
        cout<<"0 ";
    }
    else if(abs(r1-r2)==abs(c1-c2)){
        cout<<"1 ";
    }
    else{
        cout<<"2 ";
    }
    cout<<max(abs(r1-r2),abs(c1-c2))<<"\n";
}