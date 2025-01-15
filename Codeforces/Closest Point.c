#include <stdio.h>
#define ll long long
#define getl(n) scanf("%lld",&n)
#define geti(n) scanf("%i",&n)
#define gets(n) scanf("%s",&n)
#define getc(n) scanf("%c",&n)
int main() {
    ll t;scanf("%lld",&t);
    while(t--){
        ll n;getl(n);
        ll arr[2];
        for(ll i=0;i<n;i++){
            getl(arr[i%2]);
        }
        if(n==2){
            if((arr[0]-arr[1])==1 || arr[0]-arr[1]==-1){
                printf("NO\n");
            }
            else{
                printf("YES\n");
            }
        }
        else{
            printf("NO\n")
            ;        }
    }
}