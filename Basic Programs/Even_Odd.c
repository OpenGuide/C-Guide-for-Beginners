#include<stdio.h>
#include<conio.h>
int main()
{
int a;      // declaring a variable a
	printf("Enter the number: "); //print to the screen
	scanf("%d",a);				//taking input from the user

	if(a%2==0){							//Checking whether the number is even or not
	printf("the given number is even");
	}
	else{
	printf("the given number is odd");
	}

return 0;			// returning the integer value zero, signifies sucessful execution of code

}
