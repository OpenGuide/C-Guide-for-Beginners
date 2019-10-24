/*Recursive function to calculate and display n fibonacci terms.*/
#include<stdio.h>
int fibonacci(int);
void main()
{int n,i;
    printf("\nEnter the  number of terms: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("%d\t",fibonacci(i));
}

int fibonacci(int n)
{
    if(n==1||n==0)
    return n;
    return(fibonacci(n-1)+fibonacci(n-2));
}
