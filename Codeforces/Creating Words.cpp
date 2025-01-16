#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
     ll t;
     cin>>t;
     string a,b;
     while(t--){
         cin>>a>>b;
         swap(a[0],b[0]);
         cout<<a<<" "<<b<<endl;
     }
}