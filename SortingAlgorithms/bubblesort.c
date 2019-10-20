#include<stdio.h>
int a[10];
void bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void main()
{
	int i,n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for (int i = 0; i <n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe elements are:\n");
	for (int i = 0; i <n; i++)
	{
		printf("%3d",a[i]);
	}
	bubblesort(a,n);	



	printf("\nAfter bubblesort the elements are:\n");
	for (int i = 0; i <n; i++)
	{
		printf("%3d",a[i]);
	}	
}