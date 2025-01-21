#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n,k;cin>>n>>k;
    vector<ll>nums(n+1);
    nums[0]=0;
    for(ll i=1;i<=n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    if(k==n){
        cout<<nums[k]<<endl;
        return 0;
    }
    if(nums[k]==nums[k+1]){
        cout<<-1<<endl;
        return 0;
    }
    if(nums[k+1]<=1){
        cout<<-1;
        return 0;
    }
    cout<<nums[k+1]-1;
}