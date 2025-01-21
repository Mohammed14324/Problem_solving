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
ll sum[(ll)(1e6+1)];

void solve(){
    for(ll i=1;i<=1e6;i++){
        for(ll j=i*2;j<=1e6;j+=i){
            sum[j]+=i;
        }
    }
}


int main() {
    fill(sum,sum+(ll)(1e6+1),0);
    solve();
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll s=sum[n];
        if(s>n){
            cout<<"abundant\n";
        }
        else if(s==n){
            cout<<"perfect\n";
        }
        else{
            cout<<"deficient\n";
        }
    }
}
 