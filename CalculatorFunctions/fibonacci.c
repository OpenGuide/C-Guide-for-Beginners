/* Make a function that calculates the first n fibonacci numbers. Bonus points if it is recursive! */
//Fibonacci Series using Recursion
#include<stdio.h>
int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
 
int main ()
{
  int n;
  scanf("%d",&n);
  printf("%d", fib(n));
  return 1;
}