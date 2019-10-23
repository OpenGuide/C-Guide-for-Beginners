/* Make a function that calculates the first n fibonacci numbers. Bonus points if it is recursive! */
#include<stdio.h>
//Fibonacci using recursion
int fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( fibonacci(n-1) + fibonacci(n-2) );
}
int main()
{
   int n, i=0;
   printf("Enter the no upto which u wanna generate the series: ");
   scanf("%d",&n);
   printf("Fibonacci series\n");
   for(int j=1;j<=n;j++)
   {
      printf("%d\n", fibonacci(i));
      i++;
   }
   return 0;
}
