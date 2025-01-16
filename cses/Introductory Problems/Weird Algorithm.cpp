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

void solve(ll num){
    cout<<num<<' ';
    if(num==1)return;
    if(num%2==0)solve(num/2);
    else solve((num*3)+1);
}
int main(){
    ll n;cin>>n;
    solve(n);
    cout<<"\n";
}
