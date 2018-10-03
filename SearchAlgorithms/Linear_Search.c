#include <stdio.h>

int main()
{
  int array[100]; /* Array to search from */
  int s; /* Variable to search */
  int i; /* index in loop */
  int elem; /* num of elements in array */
  
  /* obtain num of elements from user */
  printf("Please enter # of elements in array: \n");
  scanf("%d", &elem);
  
  /*fill in array*/
  printf("Enter %d integer elements in array: \n", elem);
  
  for(c = 0; i < elem; i++) /* traverse through array and get every element from user */
  {
    scanf("%d", &array[i]);
  }
  
  /* obtain number wishing to find from user */
  printf("Which number would you like to search? \n");
  scanf("%d", &s);
  
  for(i = 0; i < elem; i++) /* for loop incrementing through num of elements in array */
  {
    if(array[i] == s) /* traverse through array and find number wanting to search */
    {
      printf("Found number at location %d", i+1);
      break; /* exit out of program */
    }
  }
  /* if num could not be found */
  printf("Your number was not found in the array.\n");

  return 0;
}
