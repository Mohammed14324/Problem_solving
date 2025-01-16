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
 
template<typename T>
void display(vector<T> vt){for(T i:vt){cout<<i<<' ';}line;}
 
template<typename T>
void get(vector<T>& vt){for(T& i:vt){cin>>i;}}
 
int main(){
    ll n;cin>>n;
    if(n<=3 && n!=1){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    if(n==4){
        cout<<"2 4 1 3\n";
        return 0;
    }
    for(ll i=1;i<=n;i+=2){
        cout<<i<<' ';
    }
    for(ll i=2;i<=n;i+=2){
        cout<<i<<' ';
    }
    line;
}