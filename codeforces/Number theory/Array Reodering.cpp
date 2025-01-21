 #include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll count=0;        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                if(gcd(arr[i] , 2*arr[j])>1 or gcd(arr[j] , 2*arr[i])>1){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}