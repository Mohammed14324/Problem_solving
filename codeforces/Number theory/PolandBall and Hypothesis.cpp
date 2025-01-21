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
ll Log(ll n,ll m){
    return log(m)/log(n);
}
VTB arr(1000001,true);
void generate(){
    for(ll i=2;i<sqrt(1000001);i++){
        if (arr[i]) for(ll j=i*i;j<1000001;j+=i){
            arr[j]=false;
        }
    }
}
int main(){
    ll n;cin>>n;
    generate();
    ll num=0;
    for(ll i=1;i<=1000;i++){
        if(!arr[(i*n)+1]){
            num=i;
            break;
        }
    }
    cout<<num<<"\n";
}
 