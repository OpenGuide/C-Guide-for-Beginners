#include<stdio.h>

#define Add(a,b) a+b

int main() 

{
    
	int a,b;
    
	printf("Enter two numbera to make addition:");
    
	scanf("%d%d",&a,&b);
    
	printf("%d+%d=%d",a,b,Add(a,b));
    
	return 0;

}