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

vector<VTL> arr;
bool solve(ll target , ll count , ll current){
    if(count==3)return current==target;
    bool ans=false;
    for(ll i:arr[current]){
        ans|=solve(target , count+1 , i);
    }
    return ans;
}
int main(){
    ll n;cin>>n;
    arr=VT<VTL>(n+1);
    ll num;
    For(i,n){
        cin>>num;
        arr[i+1].push_back(num);
    }
    bool can=false;
    for(ll i=1;i<=n && !can;i++){
        can=solve(i , 0 , i);
    }
    if(can){YES;}
    else {NO;}
}
 