// In here I will demonstrate how to take care of the C Bug
// check the passing_values_to_a_function.c file for the bug demonstration.

#include <stdio.h>

void function_with_no_params(void);

// Passing in the void to a function makes it a good practice that we don't
// allow parameters strictly to be passed to a function. Even main should not
// take any arguments.
int
main(void)
{
    // Call the function without parameters
    function_with_no_params();

    // Call the same function with parameters
    // The compiler will throw an error stating about too many arguments.
    function_with_no_params(1, 2);

    return 0;
}

void
function_with_no_params(void)
{
    printf("Hello, this is function with no params.\n");
}
