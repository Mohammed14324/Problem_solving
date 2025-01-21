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

ll rec(VT<vector<ll>> mp,ll emp){
    ll maxx=1;
    for(ll i:mp[emp]){
        maxx=max(maxx , 1+rec(mp,i));
    }
    return maxx;
}
int main(){
    ll n;cin>>n;
    vector<vector<ll>> empl(n );
    vector<ll> manegar(n);
    ll maxx=0;
    for(ll i=0;i<n;i++){
        cin>>manegar[i];
        if(manegar[i]!=-1){
            empl[manegar[i]-1].push_back(i);
        }
    }
    for(ll i=0;i<n;i++){
        if(manegar[i]==-1){
            maxx=max(maxx , rec(empl,i));
        }
    }
    cout<<maxx<<'\n';
}
 