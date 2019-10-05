/*
problem:
	swap two numbers without using third variable 
*/

#include <stdio.h>

int main()
{
	int x, y, temp;
	x = 10;		//initial values of X and Y
	y = 20;
	printf("Beofre swapping X = %d and Y = %d\n", x, y);   //values before swapping
	x = x + y;    // adding the values of x and y        x = 30
	y = x - y;    // subtract the values of x and y      y = 30 - 20 = 10;
	x = x- y;     // again subtract values of x and y    x = 30 - 10 = 20;
	printf("After swapping X = %d and Y = %d\n", x, y);  // values after swapping
	return 0;
}


/*
input

Before swapping X = 10 and Y = 20

output
After swapping X = 20 and Y = 10
*/