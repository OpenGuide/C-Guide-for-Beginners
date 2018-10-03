//Program to print all the prime numbers less than a given element
#include<stdio.h>
main()
{
	int i,n,p,sum;
	printf("Enter a number!\n");
	scanf("%d",&p);
	for(n=2;n<=p;n++)
	{
		sum=0;
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			sum=1;
		}
		if(sum==0)
		printf("%d\t",n);
	}				
}
