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
#define zero cout<<"0\n"

int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        bool zeros=true;
        ll count=0;
        for(ll i=0;i<n;i++){
            ll num;cin>>num;
            if(num==0){
                zeros=true;
                if(zeros)continue;
            }
            else{
                if(zeros)count++;
                zeros=false;
            }
        }
        cout<<(min(count,(ll)2))<<endl;
    }
}