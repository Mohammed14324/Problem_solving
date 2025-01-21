#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool solve(vector<ll> vt , ll target , vector<ll> ans ,ll index , bool& con){
    if(con){
        return true;
    }
    if(target==3){
        if(ans[0]<ans[1]+ans[2]){
            con=true;
            return true;
        }
        return false;
    }
    if(index==vt.size()){
        return false;
    }
    bool n1=solve(vt , target , ans , index+1 , con);
    ans.push_back(vt[index]);
    bool n2=solve(vt , target+1 , ans , index+1, con);
    return (n1 or n2);
}
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