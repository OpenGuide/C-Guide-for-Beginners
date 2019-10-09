/*  This program finds the sum of n numbers that are given through input  */


#include<stdio.h>
int main(){
    int n,a,s=0;
    printf("Enter the number of elements you want to add\n");
    scanf("%d",&n);
    printf("Enter the values need to be added\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        s += a;
    }
    printf("Sum of given %d numbers is %d\n",n,s);
}