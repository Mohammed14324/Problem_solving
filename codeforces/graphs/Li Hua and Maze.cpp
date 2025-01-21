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
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        ll x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
        ll minn=LLONG_MAX;
        if(x1!=x2){
            minn=min(minn,n);
        }
        if(y1!=y2){
            minn=min(minn,m);
        }
        if((x1==1 or x1==n) & (y1==1 or y1==m)){
            minn=min(minn,(ll) 2);
        }
        else if((x2==1 or x2==n) & (y2==1 or y2==m)){
            minn=min(minn,(ll) 2);
        }
        else if(x1==1 or y1==1 or x1==n or y1==m){
            minn=min(minn,(ll) 3);
        }
        else if(x2==1 or y2==1 or x2==n or y2==m){
            minn=min(minn,(ll) 3);
        }
        else{
            minn=min(minn,(ll)4);
        }
        cout<<minn<<endl;
    }
}
 