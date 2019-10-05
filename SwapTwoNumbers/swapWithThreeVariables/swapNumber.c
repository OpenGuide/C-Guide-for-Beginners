/*
problem:
	swap two numbers.
*/

#include <stdio.h>

int main()
{
	int x, y, temp;
	x = 10;		//initial values of X and Y
	y = 20;
	printf("Beofre swapping X = %d and Y = %d\n", x, y);   //values before swapping
	temp = x;  // store value of x in temp integer
	x = y;     // assign value of y to x i.e. x = 20
	y = temp;  // assign value of x which we stored as temp integer i.e. y = 10;
	printf("After swapping X = %d and Y = %d\n", x, y);
	return 0;
}

/*
input

Before swapping X = 10 and Y = 20

output
After swapping X = 20 and Y = 10
*/