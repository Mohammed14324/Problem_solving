#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool solve(string s , ll n,ll m,ll k){
    ll with=0;
    ll count=1;
    bool w=false;
    for(char c:s){
        if(k<=-1)return false;
        if(c=='C'){
            with=0;
            count++;
            w=true;
        }
        if(c=='W'){
            count++;
            with++;
            w=true;
        }
        if(w && c=='L'){
            if(count>m){
                ll mus=count-m;
                if(mus>with or mus>k)return false;
                else{
                    k-=mus;
                }
            }
            count=1;
        }
    }
    return true;
}
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        s = "L" + s + "L";
        cout << (solve(s ,n,m,k) ? "YES" : "NO") << endl;
    }
    return 0;
}