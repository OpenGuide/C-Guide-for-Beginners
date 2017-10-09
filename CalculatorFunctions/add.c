#include<stdio.h>

int main()
{
	float a, b;
	printf("Program to find the sum of any two given numbers\n\n");
	printf("Enter the first number: ");
	scanf("%f", &a);
	printf("Enter the second number: ");
	scanf("%f", &b);
	printf("\nSum of %.2f and %.2f is %.2f.", a, b, a + b);
  return 0;
}
