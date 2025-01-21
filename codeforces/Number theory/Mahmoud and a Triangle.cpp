#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    vector<ll> nums(t);
    for(ll i=0;i<t;i++){
        cin>>nums[i];
    }
    sort(nums.begin() , nums.end());
    reverse(nums.begin() , nums.end());
    bool are=false;
    for(ll i=2;i<t;i++){
        if(nums[i-2]<nums[i-1]+nums[i]){
            are=true;
            break;
        }
    }
    cout<<(are?"YES":"NO")<<endl;
}