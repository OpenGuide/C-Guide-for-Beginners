#include <stdio.h>
#include <math.h>

int main(){
    
    float a,b,c, delta, x1, x2;
    printf("Insert a: ");
    scanf("%f", &a);
    printf("Insert b: ");
    scanf("%f", &b);  
    printf("Insert c: ");
    scanf("%f", &c);
    
    delta = pow(b, 2) - 4*a*c;
	printf("%f", delta);
    if (delta>=0){  
        x1 = (-1*b + pow(delta, 0.5))/(2*a);
        x2 = (-1*b - pow(delta, 0.5))/(2*a);
        printf("X1 = %.3f and X2 = %.3f\n", x1, x2);
    } else
        printf("Negative delta. No results in real numbers\n");
    return 0;
};
