#include <stdio.h>
int search(int arr[], int n, int x);
int main(void) 
{ 
    int arr[100], x, n;
    printf("Enter the no of elements: "); scanf("%d",&n);
    printf("Enter all the elements\n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter the element you want to check: ");
    scanf("%d\n",&x);
    int result = search(arr, n, x);
    if(result == -1)  printf("Element is not present in array");
    else printf("Element is present at index %d", result);
    return 0; 
}
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
