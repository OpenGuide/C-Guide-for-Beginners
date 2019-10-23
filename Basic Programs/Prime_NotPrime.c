//Check whether a given number is prime or notprime
#include<stdio.h>


int main()
{
  int n,i,f=0;
  printf("Enter the Number to be checked");
  scanf("%d",n);
  for(i=2;i<n;i=i+1)
  {
  if(n%i==0)
  {
  f=1;
  break;
  }
  }
  if(f==0)
  printf("Number is Prime");
  else
  printf("NUmber is NotPrime");
  getch();
}
