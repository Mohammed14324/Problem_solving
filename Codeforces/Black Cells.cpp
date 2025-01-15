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
        vector<ll> arr(n);
        for(ll& i:arr){
            cin>>i;
        }
        if(n==1){
            cout<<"1\n";
            continue;
        }
        if(n%2==0){
            ll maxx=LLONG_MIN;
            for(ll i=0;i<n-1;i+=2){
                maxx=max(maxx,arr[i+1]-arr[i]);
            }
            cout<<maxx<<endl;
            continue;
        }
        vector<ll> dif(n);
        ll max_even=1;
        ll max_odd=1;
        for(ll i=0;i<n-1;i+=2){
            dif[i]=max_even;
            max_even=max(max_even,arr[i+1]-arr[i]);
        }
        ll ans=LLONG_MAX;
        dif.back()=max_even;
        for(ll i=n-1;i>0;i-=2){
            ans=min(ans,max(max_odd,dif[i]));
            max_odd=max(max_odd,arr[i]-arr[i-1]);
        }
        ans=min(ans,max(max_odd,dif.front()));

        cout<<ans<<endl;
    }
}