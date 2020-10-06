#include <stdio.h>
#include "function1.h"
#include "function2.h"

int main(void)
{
    int a, b;
    printf("Insert two numbers: ");
    if(scanf("%d %d", &a, &b)!=2)
    {
        fputs("Invalid input", stderr);
        return 1;
    }
    printf("func1 result: %d\n", func1(a, b));
    printf("func2 result: %d\n", func2(a, b));
    return 0;
}

