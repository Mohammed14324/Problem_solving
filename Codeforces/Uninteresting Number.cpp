#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vt) vt.begin(),vt.end()
#define For(i,n) for(ll i=0;i<n;i++)
#define VTL vector<ll>
#define VT vector
#define VTB vector<bool>
#define VTS vector<string>
#define VTC vector<char>
#define VTI vector<int>
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define line cout<<'\n'



int main(){
    ll t;cin>>t;
    while(t--){
        string s;cin>>s;
        ll count=0;
        ll count2=0;
        ll count3=0;
        for(ll i=0;i<s.length();i++){
            count+=(s[i]-'0');
            count2+=(s[i]=='2' && count2<100000);
            count3+=(s[i]=='3' && count3<100000);
        }
        bool can=false;
        for(ll i=0;i<=count2 && !can;i++){
            for(ll j=0;j<=count3;j++){
                if(((i*2 + j*6)+count)%9==0){
                    can=true;
                    break;
                }
            }
        }
        if(can){
            YES;
        }
        else{
            NO;
        }
    }
}