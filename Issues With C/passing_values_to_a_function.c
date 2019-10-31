// In this program, I will demonstrate how GCC compilers have a bug in
// them which may lead to exploiting it.
// Bug: Passing parameters to a function that actually doesn't accept any parameters
// Program was compiled with original gcc version 9.2.0

#include <stdio.h>

// Declaring the function here for preprocessing
void function_without_params();

int
main()
{
    // Call the function without parameter first
    function_without_params();

    // Call the same function with parameters
    // The compiler will not through any error here.
    // Some variants of GCC compilers may throw a warning, but no errors.
    function_without_params(1, 's');

    return 0;
}

void
function_without_params()
{
    printf("Hello, I am inside the function which accepts no parameters.\n");
}
