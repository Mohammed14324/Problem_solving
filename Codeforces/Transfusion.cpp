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
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll num;
        ll count=0;
        ll even=0;
        ll odd=0;
        for(ll i=1;i<=n;i++){
            cin>>num;
            count+=num;
            if(i%2){
                odd+=num;
            }
            else{
                even+=num;
            }
        }
        count/=n;
        if(even%((ll)n/2)!=0){
            NO;
        }
        else if(odd%((ll)(n/2)+(n%2))!=0){
            NO;
        }
        else if(even/((ll)n/2) !=count){
            NO;
        }
        else if(odd/((ll)(n/2)+(n%2))!=count){
            NO;
        }
        else{
            YES;
        }
    }
}