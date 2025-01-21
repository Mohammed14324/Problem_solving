#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
    ll t;cin>>t;
    while(t--){
        ll n,m,d;cin>>n>>d>>m;
        VTL up(n+2,0);
        
        VTL down(n+2,0);
        
        for(ll i=0;i<m;i++){
            ll a,b;cin>>a>>b;
            up[a]++;
            down[b+1]++;
        }
        ll front=-1;
        ll count=0;
        ll maxx=0,minn=LLONG_MAX,min_pos=1,max_pos=1;
        for(ll i=1;i<=n;i++ , front++){
            count+=up[i];
            if(i==d){
                front=1;
                count-=down[front];
            }
            if(i>d){
                count-=down[front];
            }
            if(i>=d){
                if(count>maxx){
                    maxx=count;
                    max_pos=front;
                }
                if(count<minn){
                    minn=count;
                    min_pos=front;
                }
            }
        }
        cout<<max_pos<<' '<<min_pos<<"\n";
    }
}