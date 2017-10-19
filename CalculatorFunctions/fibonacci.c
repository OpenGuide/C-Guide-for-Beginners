/* Make a function that calculates the first n fibonacci numbers. Bonus points if it is recursive! */
#include<stdio.h>
 
int fib(int);
 
void main()
{
   int n,c,res,i=0;
   printf("enter the number of terms");
   scanf("%d",&n);
 
   printf("Fibonacci series upto %d\n",n);
 
   for (c=1;c<=n;c++)
   {
   	res=fib(i);	
      printf("%d\n",res);
      i++; 
   }
}
 
int fib(int n)
{
   if (n==0)
      return 0;
   else if ( n==1)
      return 1;
   else
      return (fib(n-1)+fib(n-2));
} 
