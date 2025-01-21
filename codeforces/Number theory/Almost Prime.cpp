#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<bool> is_prime(3001,true);
int main(){
    ll n;cin>>n;
    ll count=0;
    vector<ll> counts(3001, 0);
    vector<ll> primes;
    for(ll i=2;i<3001;i++){
        if(is_prime[i]){
            for(ll j=i*2;j<3001;j+=i){
                counts[j]++;
                is_prime[j]=false;
            }
        }
    }
    for(ll i=0;i<=n;i++){
        if(counts[i]==2){
            count++;
        }
    }
    cout<<count<<endl;
}