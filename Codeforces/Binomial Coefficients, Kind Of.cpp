#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll MOD=(1e9)+7;
ll pow_mode(ll n) {
    long long result = 1;
    long long base = 2;

    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        n /= 2;
    }

    return result;
}

int main(){
        ll t;cin>>t;
        vector<ll> n(t);
        vector<ll> k(t);
        for(ll i=0;i<t;i++){
            cin>>n[i];
        }
        for(ll i=0;i<t;i++){
            cin>>k[i];
        }
        for(ll i=0;i<t;i++){
            if(k[i]>n[i]){
                cout<<"0\n"<<endl;
                continue;
            }
            if(k[i]==n[i] | k[i]==0){
                cout<<"1\n";
                continue;
            }
            else{
                cout<<pow_mode(k[i])<<endl;
            }
        }
}