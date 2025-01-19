#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isprime(ll n){
    if(n==2)return true;
    if(n==1)return false;
    if(n%2==0)return false;
    for(ll i=3;i<=sqrt(n);i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
   ll t,n,count=0;
   cin>>t;
   while(t--){
       cin>>n;
       ll a=sqrt(n);
       if(isprime(a)&&a*a==n){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
   }
}