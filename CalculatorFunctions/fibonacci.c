/*  Prints the first n values of fibonacci series  */


#include<stdio.h>
int main(){
    int n;
    printf("Enter size of fibonacci series\n");
    scanf("%d",&n);
    printf("Fibonacci series of size %d is\n",n);
    printf("%d %d ",0,1);
    int a=0,b=1;
    for(int i=2;i<n;i++){
        int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    printf("\n");
}