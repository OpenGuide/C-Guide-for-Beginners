// below we have a simple C program for insertion sort
#include<stdio.h>
int a[10];
void insertionsort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while(t<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=t;
	}
}
void main()
{
	int i,n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	// ask user for number of elements to be sorted
	printf("Enter the elements\n");
	// input elements if the array
	for (int i = 0; i <n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe elements are:\n");
	for (int i = 0; i <n; i++)
	{
		printf("%3d",a[i]);
	}
	// call the function insertionSort
	insertionsort(a,n);	
	// print the sorted array
	printf("\nAfter insertion sort the elements are:\n");
	for (int i = 0; i <n; i++)
	{
		printf("%3d",a[i]);
	}	
}