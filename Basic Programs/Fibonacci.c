#include<stdio.h>
int main()
{
  int a=0,b=1,c=0,i;
  printf("%d",c);
  for(i=0;i<=5;i++)
  {
  c=b+a;
  a=b;
  b=c;
  printf(" %d",c);
  }
  return 0;
}
