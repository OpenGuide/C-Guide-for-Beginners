#include<stdio.h>

double add(double a, double b)
{
    double c = a + b;
    return c;
}

int main()
{
    double a, b;
    printf("Enter 1st no.: ");
    scanf("%lf", &a);
    printf("Enter 1st no.: ");
    scanf("%lf", &b);
    double result = add(a, b);
    printf("Result: %lf", result);
    return 0;
}
