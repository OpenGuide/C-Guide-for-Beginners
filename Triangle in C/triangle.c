#include<stdio.h>
int main()
{
	int n,k;
	printf("\nEnter the number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		k=0;
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		while(k!=2*i-1)
		{
			printf("*");
			++k;
		}
		printf("\n");
		
	}
	return 0;
}

