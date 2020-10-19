/* Make a function that calculates the first n fibonacci numbers. Bonus points if it is recursive! */
#include<stdio.h>
int fibonacci(int n) 
{ //recursive function for generating fibonacci series
    if(n == 0)
    {  //base case
        return 0;
    } 
    else if(n == 1) 
    { //for second term
        return 1;
    }
    else 
    {
      return (fibonacci(n-1) + fibonacci(n-2)); //uses previous values to generate the next value
    }
}

int main() 
{ //main function to run the code
   int n,i;
   printf("Enter the number of terms: ");
   scanf("%d",&n);   //taking number of terms as user input
   printf("Fibonacci of %d: " , n);
   for(i=0;i<n;i++) 
   {
      printf("%d ",fibonacci(i));            
   }
}
