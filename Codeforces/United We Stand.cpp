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
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> arr(n);
        get(arr);
        vector<ll> b=arr,c;
        sort(all(b));
        ll last=b.back();
        while(!b.empty() && last==b.back()){
            c.push_back(last);
            b.pop_back();
        }
        if(b.size()==0 || c.size()==0){
            cout<<"-1\n";
            continue;
        }
        cout<<b.size()<<' '<<c.size()<<endl;
        for(ll i:b){
            cout<<i<<' ';
        }
        line;
        for(ll i:c){
            cout<<i<<' ';
        }
        line;
    }
}
