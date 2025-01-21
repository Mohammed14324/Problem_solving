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
    ll n;cin>>n;
    vector<ll> arr(n+1);
    map<ll,vector<ll>> teams;
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
        teams[i].push_back(arr[i]);
        teams[arr[i]].push_back(i);
    }
    vector<bool> seen(n+1,false);
    ll ans=0;
    for(ll i=1;i<=n;i++){
        if(!seen[i]){
            queue<ll> que;
            que.push(i);
            ans++;
            while(que.size()){
                ll cur=que.front();
                que.pop();
                seen[cur]=true;
                for(ll num:teams[cur]){
                    if(!seen[num]){
                        que.push(num);
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}