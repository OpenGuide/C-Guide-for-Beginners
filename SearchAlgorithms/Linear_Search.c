#include<stdio.h>
void linear_search(int n,int a[],int num)
{
	if(n>=0)
		if(a[n]==num)
			printf("%d element is found at %d position",num,n+1);
		else
			linear_search(n-1,a,num);
	else
		printf("%d element is not found",num);
}
int main()
{
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("\nEnter element number %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter element to be searched:");
	int num;
	scanf("%d",&num);
	linear_search(n-1,arr,num);
	return 0;
}