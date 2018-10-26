//programme to find sum of square of given numbers .
#include <stdio.h>

int main()
{
	int n;
	int a=0;
	printf("Number of elements \n");
	scanf("%d",&n);
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum = sum + a*a;
	}printf("sum of square of elements is : %d\n",sum );

}
