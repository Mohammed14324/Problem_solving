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
    ll n;cin>>n;
    ll dif=n%2;
    ll total=(n*(n+1))/2;
    cout<<total%2<<endl;
    cout<<n/2<<' ';
    for(ll i=0;i<n/2;i++){
        if(i%2){
            cout<<i+dif<<' ';

        }
        
        else{
            cout<<n-i<<' ';
        }
    }
    line;
}