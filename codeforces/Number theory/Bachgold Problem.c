#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <float.h>
#include <assert.h>
#include <locale.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <pthread.h>
int main(){
    int n;
    scanf("%i",&n);
    printf("%i\n",int(n/2));
    if(n%2!=0){
        n-=3;
        printf("3 ");
    }
    while(n){
        printf("2 ");;
        n-=2;
    }
}