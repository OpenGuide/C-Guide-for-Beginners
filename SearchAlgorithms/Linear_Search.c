/* This program finds the existence of an element in a given array*/


#include<stdio.h>
int main(){
    int n,m,flg=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values of array of size %d\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    printf("Enter the value that should be searched\n");
    scanf("%d",&m);

/*  While loop continues to run untill 
    flg becomes 1 when value is found
                  or
    array is fully checked and value not found    */
    while(flg==0 && i<n){
        if(m==arr[i]){
            flg=1;
            printf("%d is found at position %d in given array\n",m,i);
        }
        i++;
    }
    if(flg==0) printf("%d is not found in given array\n",m);
}