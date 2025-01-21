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

VTB arr(1000001,true);
void generate(){
    for(ll i=2;i<sqrt(1000001);i++){
        if (arr[i]) for(ll j=i*i;j<1000001;j+=i){
            arr[j]=false;
        }
    }
}
int main(){
    ll n,m;cin>>n>>m;
    vector<string> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    bool can=true;
    for(ll i=0;i<n && can;i++){
        for(ll j=0;j<m;j++){
            if(arr[i][j]=='S'){
                if(i!=0){
                    if(arr[i-1][j]=='W'){
                        can=false;
                        
                    }
                }
                if(i<n-1){
                    if(arr[i+1][j]=='W'){
                        can=false;
                        
                    }
                }
                if(j!=0){
                    if(arr[i][j-1]=='W'){
                        can=false;
                        
                    }
                }
                if(j<m-1){
                    if(arr[i][j+1]=='W'){
                        can=false;
                        break;
                        
                    }
                }

            }
           else if(arr[i][j]!='W'){
                arr[i][j]='D';
           }
        }
    }
    if(can){
        Yes;
        for(string s:arr){
            cout<<s<<"\n";
        }
    }
    else{
        No;
    }
}
 