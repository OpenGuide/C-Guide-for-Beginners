/* Make a function that calculates the first n fibonacci numbers. Bonus points if it is recursive! */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

long long int fib(int n){
    if(n==0)return 1;
    if(n==1)return 1;
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%lld\n",fib(i));
    }
return 0;
}
