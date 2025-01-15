#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;cin>>t;
    while(t--){
        ll a,b,k;cin>>a>>b>>k;
        if(k==1){
            cout<<a<<' '<<b<<endl;
            continue;
        }
        ll numa=a*k;
        ll numb=b*k;
        ll typea=(a<0?-1:1);
        ll typeb=(b<0?-1:1);
        if(k%2==0){
            cout<<(numa*2)+1<<' '<<(numb*2)+1<<endl;
            cout<<0-(numa+1)<<' '<<0-(numb+1)<<endl;
            k-=2;
        }
        else{
            cout<<numa<<' '<<numb<<endl;
            k--;
        }
        for(ll i=2;i<=k;i+=2){
            cout<<numa+i<<' '<<numb+i<<endl;
            cout<<0-(numa+i)<<' '<<0-(numb+i)<<endl;
        }
    }
}