#include<stdio.h>
int a[10];
void selectionsort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=(i+1);j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
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
	selectionsort(a,n);	



	printf("\nAfter selectionsort the elements are:\n");
	for (int i = 0; i <n; i++)
	{
		printf("%3d",a[i]);
	}	
}