#include <stdio.h>

int main()
{
	printf("Enter two Integers: ");
	int a, b;
	scanf("%d%d", &a, &b);

	// Swapping starts
	a = a + b;
	b = a - b;
	a = a - b;

	printf("The integers are now: %d and %d\n", a, b);

	return 0;
}
