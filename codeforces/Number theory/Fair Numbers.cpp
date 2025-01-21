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

bool is_fair(ll n){
    ll k=n;
    while(k){
        ll d=k%10;
        k/=10;
        if(d && n%d){
            return false;
        }
    }
    return true;
}

int main() {
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        while(!is_fair(n)){
            n++;
        }
        cout<<n<<endl;
    }
}