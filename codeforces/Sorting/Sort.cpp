#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        int arr[2][26][n];
        string s[2];
        cin>>s[0]>>s[1];
        for(ll t :{0,1}){
            for(ll c=0;c<26;c++){
                for(ll i=0;i<n;i++){
                    arr[t][c][i+1]=arr[t][c][i]+(s[t][i]-'a'==c);
                }
            }
        }
        while(m--){
            ll a,b;cin>>a>>b;
            a--;
            ll count=0;
            for(ll i=0;i<26;i++){
                ll num1=abs(arr[0][i][b]-arr[0][i][a]);
                ll num2=abs(arr[1][i][b]-arr[1][i][a]);
                count+=abs(num1-num2);
            }
            cout<<count/2<<endl;
        }
    }
}