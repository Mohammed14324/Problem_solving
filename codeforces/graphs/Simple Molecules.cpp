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
    ll a,b,c;cin>>a>>b>>c;
    if(a+b<c || a+c<b || b+c<a ||(a+b+c)%2!=0){
        cout<<"Impossible\n";
        return 0;
    }
    cout<<(a+b-c)/2<<' '<<(c+b-a)/2<<' '<<(a+c-b)/2<<endl;
}