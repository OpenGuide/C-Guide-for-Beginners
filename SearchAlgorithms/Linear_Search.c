#include<stdio.h>
int search(int *a, int n, int b)
{
  int i;
  for (i=0; i<n; i++)
    if (a[i] == b)
      return (i+1);
}

int main()
{
  int i, n, b, x;
  printf("Enter the array size: ");
  scanf("%d", &n);
  int a[n];
  for (i=0; i<n; i++)
    scanf("%d", &a[i]);
  printf("Enter the element to search: ");
  scanf("%d", &b);
  x = search(a, n, b);
  printf("The position of %d is: %d", b, x);
  return 0;
}
