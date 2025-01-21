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
    ll t,n;cin>>t;
    char num;
    while(t--){
        cin>>n;
        VT<VTI> arr(2 , VTI(n));
        For(j,2){
            For(i,n){
                cin>>num;
                arr[j][i]=num-'0';
            }
        }
        ll count=0;
        For(i,n){
            if(arr[1][i]){
                if(!arr[0][i]){
                    count++;
                }
                else{
                    if(i>0){
                        if(arr[0][i-1]==1){
                            arr[0][i-1]=2;
                            count++;
                            continue;
                        }
                    }
                    if(i<n-1){
                        if(arr[0][i+1] ==1){
                            arr[0][i+1]=2;
                            count++;
                        }
                    }
                }
            }
        }
        cout<<count<<endl;
    }
}
 