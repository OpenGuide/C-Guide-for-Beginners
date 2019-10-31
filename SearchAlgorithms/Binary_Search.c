#include <stdio.h>

//iterative function for binary search
void binary_search(int arr[], int n, int x)
{
	int left,right;
	left = 0;
	right = n-1;
	while(left <= right)
	{
		int m = (left + right)/2;
		if(x < arr[m])
			right = m-1;
		else if(x > arr[m])
			left = m + 1;
		else
		{
			printf("Number found at %d location\n", m);
			return;
		}
	}
	printf("Number not found\n");
}

void main()
{
	//sorted array is necessary condition for binary search
	int arr[] = { 1, 4, 5, 6, 12, 19,20,21,22, 25,30,35,38,50};
	int n = sizeof(arr) / arr[0];
	// A number to be searched x
	int x = 7;
	binary_search(arr, n, x);
}