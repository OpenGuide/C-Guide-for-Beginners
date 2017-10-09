#include<stdio.h>

int main()
{
	int n, i, item;
	printf("Program to perform a linear search.\n\n");
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("\nEnter the elements: ");
	for(i=0; i<n; i++)	scanf("%d", &arr[i]);
	printf("\nEnter the item to be searched: ");
	scanf("%d", &item);
	for(i=0; i<n; i++)
		if(arr[i] == item)	break;
	if(i == n)	printf("\nSorry! the specified element is not found.");
	else	printf("\nThe element found at: %d", i + 1);
    return 0;
}
