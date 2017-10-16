#include <stdio.h>

int main() {

    double firstNumber, secondNumber, sum;

    printf("First number: ");
    scanf("%lf", &firstNumber);
    printf("Second number: ");
    scanf("%lf", &secondNumber);

    sum = firstNumber + secondNumber;

    printf("\n%.2lf + %.2lf = %.2lf\n", firstNumber, secondNumber, sum);
    printf("The sum is: %.2lf\n", sum);

    return 0;
}
