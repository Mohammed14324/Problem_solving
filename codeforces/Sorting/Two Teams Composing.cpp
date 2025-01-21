#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t,n,num;cin>>t;
    while(t--){
        cin>>n;
        ll maxx=0;
        ll c=0;
        map<ll,bool>mp;
        map<ll,ll>count;
        ll nn=n;
        for(ll i=0;i<n;i++){
            cin>>num;
            if(!mp[num]){
                mp[num]=true;
            }
            else{
                count[num]++;
                maxx=max(maxx,count[num]);
                c++;
                nn--;
            }
        }
        ll maxx2=maxx+1;
        ll nn2=nn-1;
        cout<<max(min(nn,maxx),min(maxx2,nn2))<<endl;
    }
}