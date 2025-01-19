#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=2e5+1;
int n;ll a[N],t[N],sum,ans[N],k=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i],sum+=a[i],t[i]=a[i];
    sort(t+1,t+1+n);
    for(int i=1;i<=n;i++){
        if(sum-a[i]==2*t[a[i]==t[n]?n-1:n]) ans[++k]=i;
    }
    cout<<k<<'\n';
    for(;k;) cout<<ans[k--]<<' ';
}
