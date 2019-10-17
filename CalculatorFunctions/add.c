/**
 * C program to find sum of two numbers
 */

#include <stdio.h>

int main()
{
    int num1, num2, sum;

    /*
     * Read two numbers from user
     */
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);

    /* Adding both number is simple and fundamental */
    sum = num1 + num2;

    /* Prints the sum of two numbers */
    printf("Sum of %d and %d = %d", num1, num2, sum);

    return 0;
}
