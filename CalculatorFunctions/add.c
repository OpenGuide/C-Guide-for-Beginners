#include <stdio.h>

int main() {

    float firstNumber, secondNumber, sum;

    printf("First number: ");
    scanf("%f", &firstNumber);
    printf("Second number: ");
    scanf("%f", &secondNumber);

    sum = firstNumber + secondNumber;

    printf("\n%.2f + %.2f = %.2f\n", firstNumber, secondNumber, sum);
    printf("The sum is: %.2f\n", sum);

    return 0;
}
