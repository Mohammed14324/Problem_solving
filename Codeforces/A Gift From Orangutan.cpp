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
ll Log(ll n,ll m){
    return log(m)/log(n);
}

class string_operations {
private:
    void addzeros(string& s,ll n){
        while(n--){
            s+='0';
        }
    }
    
public:
    string multiply_strings(string s,ll num){
        ll baq=0;
        string ret="";
        while(s.size()){
            ll cur=baq+((s.back()-'0')*num);
            ret=char((cur%10)+'0')+ret;
            s.pop_back();
            baq=cur/10;
        }
        if(baq){
            ret=to_string(baq)+ret;
        }
        return ret;
    }
    string sum_strings(string s,string p){
        ll baq=0;
        string ret="";
        while(s.length() || p.length()){
            ll cur=baq;
            if(s.size() && p.size()){
                cur+=p.back()-'0';
                cur+=s.back()-'0';
                s.pop_back();
                p.pop_back();

            }
            else if(s.size()){
                cur+=s.back()-'0';
                s.pop_back();
            }
            else if(p.size()){
                cur+=p.back()-'0';
                p.pop_back();
            }
            ret=char((cur%10)+'0')+ret;
            baq=cur/10;
        }
        if(baq){
            ret=char((baq%10)+'0')+ret;
        }
        return ret;
    }
    string multiply_strings(string num1, string num2) {
        if(num1=="0" | num2=="0")return "0";
        string s="";
        ll l2=num2.length();
        for(ll i=l2-1;i>=0;i--){
            string mul=multiply_strings(num1,num2[i]-'0');
            addzeros(mul,(l2-i)-1);
            s=sum_strings(s,mul);
        }
        return s;
    }
};


/**********************************************************************************************************************************************************************/
ll greatest(ll n){
    for(ll i=sqrt(n);i>=1;i--){
        if(n%i==0)return i;
    }
    return 0;
}
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll maxx=LLONG_MIN;
        ll minn=LLONG_MAX;
        for(ll i=0;i<n;i++){
            ll num;cin>>num;
            maxx=max(num,maxx);
            minn=min(minn,num);
        }
        cout<<(maxx-minn)*(n-1)<<endl;
    }
}