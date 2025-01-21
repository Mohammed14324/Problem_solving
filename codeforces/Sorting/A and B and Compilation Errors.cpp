#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,num;cin>>t;
    ll t2=t-1,t3=t-2;
    ll sum1=0,sum2=0;
    while(t--){
        cin>>num;
        sum1+=num;
    }
    while(t2--){
        cin>>num;
        sum2+=num;
    }
    cout<<sum1-sum2<<endl;
    sum1=0;
    while(t3--){
        cin>>num;
        sum1+=num;
    }
    cout<<sum2-sum1;
}