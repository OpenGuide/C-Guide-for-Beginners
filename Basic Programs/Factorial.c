#include<stdio.h>

int main()
{
  long int n,i,f=1;
  printf("Enter the number\n");
  scanf("%ld",&n);
  for(i=1;i<=n;i=i+1)
  {
  f=f*i;
  }

  printf("Factorial of %ld = %ld",n,f);
  return 0;a
}
