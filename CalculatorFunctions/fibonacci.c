/* Make a function that calculates the first n fibonacci numbers. Bonus points if it is recursive! */

#include <stdio.h>

int fibonacci(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    int n = 0, i = 0;

    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    for(i = 0; i < n; i ++)
        printf("%d ", fibonacci(i));
    printf("\n");
    return 0;
}
