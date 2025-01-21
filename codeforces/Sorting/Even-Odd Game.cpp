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
const ll mod=1073741824;

int main() {
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> odd,even;
        for(ll i=0;i<n;i++){
            ll num;cin>>num;
            if(num%2)odd.push_back(num);
            else even.push_back(num);
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        ll bob=0;
        ll ali=0;
        while(even.size() || odd.size()){
            if(even.empty()){
                odd.pop_back();
            }
            else{
                if(odd.empty() || even.back()>=odd.back()){
                    ali+=even.back();
                    even.pop_back();
                }
                else{
                    odd.pop_back();
                }
            }
            if(odd.empty() && even.empty())break;
            if(odd.empty()){
                even.pop_back();
            }
            else{
                if(even.empty() || even.back()<=odd.back()){
                    bob+=odd.back();
                    odd.pop_back();
                }
                else{
                    even.pop_back();
                }
            }
            
        }
        if(bob>ali){
            cout<<"Bob\n";
        }
        else if(bob<ali){
            cout<<"Alice\n";
        }
        else{
            cout<<"Tie\n";
        }
    }
}
 