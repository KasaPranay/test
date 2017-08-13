#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    while (t--){
    unsigned long long int sum=2,a=1,b=2,c=3,n;
        scanf("%llu",&n);
        while (c<=n){
        if (c%2==0)
         sum+=c;
          a=b;
          b=c;
          c=a+b;
        }
        printf("%llu\n",sum);
    }
    return 0;
}
