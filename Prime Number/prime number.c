#include <stdio.h>
void main()
{
    int n, i, flag = 0; // here flag is a temporary variable which is intially assigned value 0

    printf("Enter a positive integer: "); // prime numbers are positive only
    scanf("%d", &n);

    for(i = 2; i <= n-1; ++i)
    {
        // condition for nonprime number
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1) 
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else 
    {
        if (flag == 0)
          printf("%d is a prime number.", n);
        else
          printf("%d is not a prime number.", n);
    }
    
    
}

