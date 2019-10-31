#include <stdio.h>

void linear_search(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			printf("Number found at %d position", i);
			return;
		}
	}
	printf("Number not found\n");
}

void main()
{
	int arr[] = { 1,3,2,6, 7,8, 10, -4 , -5, -2, 0, 12 };
	int n = sizeof(arr) / arr[0];
	// A number to be searched x
	int x = 7;
	linear_search(arr, n, x);
}
