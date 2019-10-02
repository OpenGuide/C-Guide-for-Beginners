// including the C libraries 
// standart input/output and math
#include <stdio.h> 
#include <math.h>

int main(){
    int h, b;

    printf("Enter the values of the height and the base\n");
    scanf("%d %d", &h, &b);

    printf("The Area of the triangle inputted is %d\n", ((h*b)/2));

}