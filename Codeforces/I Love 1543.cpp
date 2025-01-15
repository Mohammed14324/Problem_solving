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

int main() {
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        vector<string>arr(n);
        get(arr);
        ll count=0;
        for (ll i = 0; i < n / 2 && i < m / 2 ; i++) {
            string w = "";
            
            for (ll j = i; j < m - i; j++) {
                w += arr[i][j];
            }
            
            for (ll j = i + 1; j < n - i; j++) {
                w += arr[j][m - i - 1];
            }
            
            for (ll j = m - i - 2; j >= i; j--) {
                w += arr[n - i - 1][j];
            }
            
            for (ll j = n - i - 2; j > i; j--) {
                w += arr[j][i];
            }
            w+=w;
            for(ll j=0;j<w.length()/2;j++){
                if (w.substr(j, 4) == "1543")
                    count++;

            }
        }
        
        cout<<count<<endl;
    }
    
}