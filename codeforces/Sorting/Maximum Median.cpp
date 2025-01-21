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

template<typename T>
void display(vector<T> vt){for(T i:vt){cout<<i<<' ';}line;}

template<typename T>
void get(vector<T>& vt){for(T& i:vt){cin>>i;}}

bool can(ll mid,ll k,vector<ll> arr){
    ll sum=0;
    for(ll i=arr.size()/2;i<arr.size();i++){
        if(arr[i]<mid){
            sum+=mid-arr[i];
        }
    }
    return sum<=k;
}
int main() {
    ll n,k;cin>>n>>k;
    vector<ll> arr(n);
    get(arr);
    sort(all(arr));
    ll l=arr[n/2],r=(arr[n/2])+k,ans=arr[n/2];
    while(l<=r){
        ll mid=(l+r)/2;
        if(can(mid,k,arr)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}
 