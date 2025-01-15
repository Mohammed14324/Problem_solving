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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define Yes cout<<"Yes\n";
#define No cout<<"No\n";
#define yes cout<<"yes\n";
#define no cout<<"no\n";
#define line cout<<'\n';

/**********************************************************************************************************************************************************************/
ll greatest(ll n){
    for(ll i=sqrt(n);i>=1;i--){
        if(n%i==0)return i;
    }
    return 0;
}
void out(ll n){
    For(i,n-1){
        cout<<0;
    }
    cout<<1;line;
}
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string s;cin>>s;
        bool ans=s[0]=='1';
        queue<char> que;
        ll count=0;
        for(ll i=0;i<s.length();i++){
            if(!count){
                que.push(s[i]);
                count=2;
            }
            else{
                if(i==s.length()-1){
                    que.push(s[i]);
                }
                que.push(s[i]&s[i+1]);
            }
        }
        while(que.size()){
            ans|=que.front()=='1';
            que.pop();
        }
        if(ans){
            YES;
        }
        else{
            NO;
        }
    }
}
