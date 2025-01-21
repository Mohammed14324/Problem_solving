#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll ce=0;
        ll co=0;
        ll nums[n];
        for(ll i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]%2==0){
                ce++;
            }
            else co++;
        }
        ce=ce%2;
        bool are=true;
        if(ce==1)are=false;
        for(ll i=0;i<n-1 && !are;i++){
            for(ll j=i+1;j<n;j++){
                if(abs(nums[i]-nums[j])<=1){
                    if((nums[i]+nums[j])%2!=0){
                        are=true;
                        break;
                    }
                }
            }
        }
        cout<<(are?"YES":"NO")<<endl;
    }
}