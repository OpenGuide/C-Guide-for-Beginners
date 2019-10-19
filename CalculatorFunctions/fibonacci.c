/* Make a function that calculates the first n fibonacci numbers. Bonus points if it is recursive! */
#include <stdio.h>

// Recursive function that choose the next number of the sequence based on the two previous
int fibonacci(int n) {
    // recursion stop condition
    if (n == 0 || n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int i, n;
    printf("Choose the first n numbers of the fibonacci sequence: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}