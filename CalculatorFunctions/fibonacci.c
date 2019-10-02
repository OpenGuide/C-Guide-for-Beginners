/* Make a function that calculates the first n fibonacci numbers. Bonus points if it is recursive! */
#include <stdio.h>

int c[101]; 

int fibonacci(int n) {
    if (n < 2) {
        c[n] = n;
        return n;
    }

    c[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return c[n];
}

int main() {
    int n, limit = 41;
    
    printf("Program to list the first n fibonacci numbers...\n");
    printf("Enter \"n\" and should be between 0 and %d\n", limit);
    scanf("%d", &n);

    fibonacci(n = n > limit? limit: n);
    
    for (int i=0; i<=n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
