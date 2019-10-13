#include <stdio.h>

long long power(long long x, long long y)
{
	// x to the power zero is 1
	if(y == 0)
		return 1;
	// x to the power one is x
	else if(y == 1)
		return x;
		
	// We now split the problem in two parts, solve one of them and use its resultant for the second part
	else
	{
		long long ans = power(x, y/2);
		
		// If the power is not divisible by 2, we simply multiply by x
		if(y % 2 == 0)
			return ans * ans;
		else
			return ans * ans * x; 
	}
}

int main()
{
	printf("Enter two numbers: ");
	long long a, b, result;
	scanf("%lld%lld", &a, &b);
	result = power(a, b);
	printf("The result is: ", result);	
	return 0;
}
