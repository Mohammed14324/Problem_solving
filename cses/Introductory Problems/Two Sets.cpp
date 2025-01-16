
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
 
void display(vector<ll> vt){for(ll i:vt){cout<<i<<' ';}line;}
void display(vector<string> vt){for(string i:vt){cout<<i<<' ';}line;}
void display(vector<char> vt){for(char i:vt){cout<<i<<' ';}line;}
void display(vector<int> vt){for(int i:vt){cout<<i<<' ';}line;}
void display(vector<short> vt){for(short i:vt){cout<<i<<' ';}line;}
void display(vector<float> vt){for(float i:vt){cout<<i<<' ';}line;}
void display(vector<double> vt){for(double i:vt){cout<<i<<' ';}line;}
 
 
int main(){
    ll n;cin>>n;
    if(((n*(n+1))/2)%2!=0){
        NO;
        return 0;
    }
    YES;
    vector<ll> vt1,vt2;
    ll sum1=0;
    ll sum2=0;
    for(ll i=n;i>=1;i--){
        if(sum1<=sum2){
            sum1+=i;
            vt1.push_back(i);
        }
        else{
            sum2+=i;
            vt2.push_back(i);
        }
    }
    cout<<vt1.size()<<endl;
    display(vt1);
    
    cout<<vt2.size()<<endl;
    display(vt2);
}
