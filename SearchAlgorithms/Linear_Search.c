/* Given number x and array of size n and that x is in this array, find index of x in array with 0 based indexing*/

#include<stdio.h>                         // this is the standard library containing standard input/output functions

void main(){                              
    int n;
    scanf("%d", &n);                       // takes the input for n and %d implies n is an integer
  
    int ar[n];                            // ar of size n of data type int
  
    for(int i = 0; i < n; i++){                 // array is scaned
      
        scanf("%d", &ar[i]);
      
    }
  
    int x;
    scanf("%d", &x);                       // x whose index we need
  
    for(int i = 0; i < n; i++){
      
         if(ar[i] == x){
           
            printf("%d\n", i);            // if ar[i] == x prints its index and breaks out of loop
            break;
           
         }
      
     }
  
}
