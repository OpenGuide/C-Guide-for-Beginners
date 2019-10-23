#include<stdio.h>
void fibonacci(int n,int a,int b,int count)
{
	if(count!=n)
	{
		printf("%d\t",a+b);
		fibonacci(n,b,a+b,count+1);
	}
}
int main()
{
	int n;
	printf("Enter number of fibonacci elements you want:");
	scanf("%d",&n);
	printf("0\t1\t");
	fibonacci(n,0,1,2);
	return 0;
}