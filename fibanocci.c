#include<stdio.h>
#include<conic.h>
void main()
{
int i,n,a=0,b=1,c;
clrsr();
printf("Enter no of terms to be printed: /n");
scanf("%d",&n);
printf("/n Fibonnaci Series /n");
for(i=0;i<n;i++)
{
printf("%d/t",a);
c=a+b;
a=b;
b=c;
}
getch();
}
