/* Make a function that calculates the first n fibonacci numbers. Bonus points if it is recursive! */

#include<stdio.h>
#include<math.h>

//Fibonnaci Function

int fibo(int quantityNumber){
    if(quantityNumber<2){
    return quantityNumber;
    }
    return fibo(quantityNumber-1)+fibo(quantityNumber-2);
    }

int main(void){

//Variables

    int quantityNumber=0,i=0;

//Ask the user for the first n numbers to made a Fibonnaci Series

    printf("Please write the first positive number of terms(Quantity) for Fibonnaci Series(Sequence)\n");


    scanf("%d",&quantityNumber);

// transform the number in his absolute, so I could use negative and possitive number and show only the possitive Fibonnaci Series

quantityNumber = abs(quantityNumber);

//loop to send the n numbers to fibo function.
//i<= so I could write the first term which is zero.

    for(;i<=quantityNumber;i++){
        printf("%d ",fibo(i));
        }

    return 0;
    }
