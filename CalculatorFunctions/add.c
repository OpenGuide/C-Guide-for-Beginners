#include<stdio.h>
int main()
{
    //Define variables
    double num1 = 0;
    double num2 = 0;
    
    //Describe program and prompt for first number
    printf("This program will fund the sum of two numbers.\n");
    printf("Please input the first number:\n");
    //Read first number
    scanf("%lf", &num1);
    
    //Prompt for second number & read it
    printf("Please input the second number:\n");
    scanf("%lf", &num2);
    
    //Add the numbers up
    double sum = num1 + num2;
    
    //Print the sum
    printf("The sum of the numbers is %0.1f\n", sum);
    
    return 0;
}
