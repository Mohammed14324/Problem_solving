#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vt) vt.begin(),vt.end()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define line cout<<'\n'

template<typename T>
void display(vector<T> vt) { for(T i : vt) { cout << i << ' '; } line; }

template<typename T>
void get(vector<T>& vt) { for(T& i : vt) { cin >> i; } }


int main() {
    ll t;cin>>t;
    while(t--){
        ll n ;cin>>n;
        char c;cin>>c;
        string s;cin>>s;
        ll x=0;
        bool can=false;
        for(ll i=0;i<n;i++){
            if(s[i]!=c){
                can=true;
            }
            else{
                x=i+1;
            }
        }
        if(!can){
            cout<<"0\n";
            continue;
        }
        if(x>n/2){
            cout<<"1\n"<<x<<endl;
        }
        else{
            cout<<"2\n"<<n-1<<' '<<n<<endl;
        }
    }
}