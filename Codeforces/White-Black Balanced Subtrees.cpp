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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define Yes cout<<"Yes\n";
#define No cout<<"No\n";
#define yes cout<<"yes\n";
#define no cout<<"no\n";
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll par[n+2],count[n+2],ans=0;
        fill(count,count+n+2,0);
        for(ll i=2;i<=n;i++){
            cin>>par[i];
        }
        string s;cin>>s;
        for(ll i=n;i>0;i--){
            if(s[i-1]=='W')count[i]++;else count[i]--;
            if(i-1)count[par[i]]+=count[i];
            if(count[i]==0)ans++;
        }
        cout<<ans<<endl;
    }
}