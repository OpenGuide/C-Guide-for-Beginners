// Linearly search x in arr[].  If x is present then return its 
// location,  otherwise return -1
int search(int arr[], int n, int x)
{
  for (int i=0; i<n; i++) {
      if (arr[i] == x) return i;
  } 
  return -1;
}
