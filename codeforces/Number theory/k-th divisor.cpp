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
    ll n,k;cin>>n>>k;
    vector<ll> arr;
    for(ll i=1;i<=sqrt(n);i++){
        if(n%i==0){
            arr.push_back(i);
            if(i*i!=n )arr.push_back(n/i);
        }
    }
    if(k>arr.size()){
        cout<<"-1\n";
        return 0;
    }
    sort(all(arr));
    cout<<arr[k-1]<<endl;
}