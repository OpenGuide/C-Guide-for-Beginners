#include <stdio.h>

int main()
{
	float num1, num2, sum;

	printf("\n************************************************************\n");
	printf("* C program to add two numbers");
	printf("\n************************************************************\n");

	// Request for floating values to be entered and enter them.
	printf("Enter 1st number : \n");
	scanf("%f", &num1);
	printf("Enter 2nd number : \n");
	scanf("%f", &num2);

	// Add to values
	sum = num1 + num2;

	// Round values to two decimal places
	printf("\n%.2f + %.2f = %.2f\n", num1, num2, sum);
	
	return 0;
}
