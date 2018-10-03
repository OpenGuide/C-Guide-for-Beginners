//Program to sum an array
#include<stdio.h>
main()
{
	int n;
	printf("Enter the strength of an arrya: ");
	scanf("%d",&n);
	int arr[n],i,sum=0;
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
		sum=sum+arr[i];
	printf("sum is %d",sum);
}
