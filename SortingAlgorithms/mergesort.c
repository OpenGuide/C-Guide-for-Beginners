#include <stdio.h>
#include <math.h>

void merge(int array[], int left, int mid, int right)
{
	int leftSize = (mid - left + 1),i;
	int rightSize = (right - mid);

	int leftArray[leftSize], rightArray[rightSize];

	for (i=0; i<leftSize; i++)
		leftArray[i] = 0;
	for (i=0; i<rightSize; i++)
		rightArray[i] = 0;

	int leftIndex=0, rightIndex=0,index;

	//Creates the left and right subarrays
	for (index=0; index<leftSize; index++)
		leftArray[index] = array[left + index];

	for (index=0; index<rightSize; index++)
		rightArray[index] = array[mid + 1 + index];

	int mainArrayIndex = left;

	//Code for merging the sorted subarrays
	while(leftIndex<leftSize && rightIndex<rightSize)
	{
		if(leftArray[leftIndex]>rightArray[rightIndex])
			array[mainArrayIndex++] = rightArray[rightIndex++];
		else
			array[mainArrayIndex++] = leftArray[leftIndex++];
	}

	//If rightIndex >= rightSize
	while(leftIndex<leftSize)
		array[mainArrayIndex++] = leftArray[leftIndex++];

	// If leftIndex >= leftSize
	while(rightIndex<rightSize)
		array[mainArrayIndex++] = rightArray[rightIndex++];

	return;
}

void callMergeSort(int array[], int left, int right)
{
	if(left<right)
	{
		int mid = (int)floor((left+right-1)/2);
		// Splits the array into two and calls mergesort on the left and right halves
		callMergeSort(array, left, mid);
		// Splits the array into two and calls mergesort on the left and right halves
		callMergeSort(array, mid+1, right);
		//Merges the two sorted arrays
		merge(array, left, mid, right);
	}
	return;
}

int main()
{
	int i,n;
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
	
	printf("Enter the elements of the array:\n");
	
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	callMergeSort(a,0,n-1);

	//Prints the final array
	printf("The sorted array is:\n");
	for (i=0;i<n;i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}	