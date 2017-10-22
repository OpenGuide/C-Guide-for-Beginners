#include <stdio.h> 	// for i/o, printf(), scanf() specifically
#include <math.h>	// for sqrt(), for math functions, sqrt() specifically

/* Program to calculate (-b +- sqrt(b^2 - 4ac)) / (2a) */
int main()
{
	// declare real number variables
	float a, b, c, disc, x1, x2;

	// initialize input variables
	printf("For (-b +- sqrt(b^2 - 4ac)) / (2a), \n Define a, b, and c, respectfully: ");

	// get input for the three floats from the user. 
	scanf("%f %f %f", &a, &b, &c);

	// calculate discriminant (b^2 - 4ac) 
	disc = b * b - 4 * a * c;			

	// check IF discriminant LESS THAN 0, if it is, there are no real solutions 
	if (disc < 0)
	{
		// if it is < 0, print "no solutions"
		printf("No real solutions!\n");

		// and terminate the program eaerly (exit code = -1, meaning something went wrong)
		return -1;
	}

	// else calculate the two solutions 
	x1 = (-b + sqrt(disc)) / (2 * a);
	x2 = (-b - sqrt(disc)) / (2 * a); 

	// print output
	printf("Solution1: %f, Solution2: %f\n", x1, x2);

	// terminate gracefully (exit code = 0) 
	return 0;
}
