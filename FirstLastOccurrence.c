#include <stdio.h>
#define LUNG_ARR 7



//This program tells the first and last occurrence of a even number of an array
void pup(int arr[], int dim, int* prim, int* ult);

int main(void){
    int a[LUNG_ARR], prim = -1, ult = -1, i;
    for(i = 0; i < LUNG_ARR; i++){
        while(scanf("%d", (a+i))!=1){
            printf("Inserisci un intero.");
            scanf("%*[^\n]%*c");
        }
    }
    pup(a, LUNG_ARR, &prim, &ult);
    printf("%d %d\n", prim, ult);
    return 0;
}

void pup(int arr[], int dim, int* prim, int* ult){
    for(int i = 0; i<dim; i++){
        if(*prim == -1 && *(arr+i)%2 == 0){
            *prim=i;
            *ult=i;
        }
        else if(*(arr+i)%2 == 0)
            *ult=i;
    }
}
