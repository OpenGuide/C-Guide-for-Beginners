/* Make a function that calculates the first n fibonacci numbers. Bonus points if it is recursive! */
int fibonacciRecursion(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	return fibonacciRecursion(n - 1) + fibonacciRecursion(n - 2);
}

int fibonacciIteration(int n)
{
	int num1 = 0;
	int num2 = 1;
	int tmp=0;

	for (int i = 0; i<n - 1; i++) {
		tmp = num2;
		num2 += num1;
		num1 = tmp;
	}
	return num2;

}