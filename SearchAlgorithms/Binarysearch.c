//take an sorted array , check wheather an element is present in given array or not .


#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) 
{ 

   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
  
        // If the element is present at the middle itself 
        if (arr[mid] == x)  return mid; 
  
        // If element is smaller than mid, then it can only be present 
        // in left subarray 
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x); 
  
        // Else the element can only be present in right subarray 
        return binarySearch(arr, mid+1, r, x); 
   } 
  
   // We reach here when element is not present in array 
   return -1; 
} 

int main()
{
  // n = number of elements in array.
  int n;
  printf("Enter n \n");
  //take input n
  scanf("%d",&n);
  //A = array to stored elements.
  int A[100];
  //Take array as input .
  for(int i=0;i<n;i++)
  {
    scanf("%d",&A[i]);
  }
  //x = Element that we need to search .
  int x;
  printf("Enter element that you want  to search \n");
  //input of x
  scanf("%d",&x);
  //call Binary function
  int result = binarySearch(A,0 , n , x);
  //print result 
  if(result == -1)
    printf("Element is not present in array\n");
  else 
    printf("Element is present in array at index %d\n",result);

}