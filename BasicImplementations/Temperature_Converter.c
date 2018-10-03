#include<stdio.h>
main()
{
	float f,c;
	printf("Enter temperature in degree farheniet\n");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("Temperature in degree celcius is %f",c);
}
