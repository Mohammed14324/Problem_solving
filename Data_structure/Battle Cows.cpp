#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        ll nums[a];
        ll maxx=-1;
        for(ll i=0;i<a;i++){
            cin>>nums[i];
            
        }
        ll my=nums[b-1];
        for(ll i=0;i<a;i++){
            if(nums[i]>my){
                maxx=i;
                break;
            }
        }
        if(maxx==-1){cout<<a-1<<endl;continue;}
        maxx++;
        if(maxx>b){
            cout<<maxx-2<<endl;
            continue;
        }
        ll f=maxx-2;
        ll count=0;
        swap(nums[b-1],nums[maxx-1]);
        ll sec=0;
        for(ll i=maxx;i<a;i++){
            if(nums[i]>my){
                break;
            }
            sec++;
        }
        if(maxx!=1){
            sec++;
        }
        cout<<max(sec,f)<<endl;
    }
}