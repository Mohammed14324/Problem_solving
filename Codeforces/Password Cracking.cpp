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
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string pass="";
        ll num=0;
        bool Back=true;
        bool last;
        cout<<"? 0"<<endl;
        cin>>num;
        if(num)pass="0";
        else pass="1";
        for(ll i=2;i<=n*2 && pass.length()<n;i++){
            last=false;
            if(Back){
                cout<<"? "<<pass+'0'<<"\n";
                cin>>num;
                if(num){
                    pass+='0';
                    continue;
                }
                else{
                    cout<<"? "<<pass+'1'<<"\n";
                    cin>>num;
                    if(!num){
                        Back=false;
                        last=true;
                    }
                    else{
                        pass+='1';
                    }
                }
            }
            if(!Back){
                if(last){
                    if((pass+'0')==('0'+pass)){
                        pass='1'+pass;
                        continue;
                    }
                    
                    if((pass+'1')==('1'+pass)){
                        pass='0'+pass;
                        continue;
                    }
                }
                cout<<"? "<<'0'+pass<<endl;
                cin>>num;
                if(num){
                    pass='0'+pass;
                    continue;
                }
                pass='1'+pass;
            }
        }
        cout<<"! "<<pass<<endl;
        cout.flush();
    }
}