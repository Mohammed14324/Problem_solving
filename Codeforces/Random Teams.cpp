#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll a,b;
    cin>>a>>b;
    ll l=a-(b-1);
    ll maxx=((l*(l-1))/2);
    ll rem=a%b;
    a-=rem;
    a=a/b;
    ll c=0;
    c+=((a*(a-1))/2)*(b-rem);
    a+=1;
    b-=(b-rem);
    c+=((a*(a-1))/2)*(b);
    cout<<c<<' '<<maxx<<endl;
}