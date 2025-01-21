#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(ll i=0;i<n;i++)
#define VTL vector<ll>
#define VT vector
#define VTB vector<bool>
#define VTS vector<string>
#define VTC vector<char>
#define VTI vector<int>
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define Yes cout<<"Yes\n";
#define No cout<<"No\n";
#define yes cout<<"yes\n";
#define no cout<<"no\n";

VTB arr(1000001,true);
void generate(){
    for(ll i=2;i<sqrt(1000001);i++){
        if (arr[i]) for(ll j=i*i;j<1000001;j+=i){
            arr[j]=false;
        }
    }
}
int main(){
    ll n,m;cin>>n>>m;
    vector<VTL> arr(2,VTL(n));
    for(ll i=0;i<n;i++){
        cin>>arr[0][i];
    }
    bool is=false;
    for(ll i=0;i<n;i++){
        cin>>arr[1][i];
        if(i==m-1 && arr[1][i] ){
            is=true;
        }
        arr[1][i]=is && arr[1][i];
    }
    is=false;
    for(ll i=0;i<n;i++){
        if(arr[1][i] && arr[0][i]==1){
            is=true;
            break;
        }
    }
    if((is | arr[0][m-1]) & arr[0][0]){
        YES;
    }
    else{
        NO;
    }
}
 