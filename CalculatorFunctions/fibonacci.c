/* Make a function that calculates the first n fibonacci numbers. Bonus points if it is recursive! */
#include <stdio.h>
void fibonacci (int n){
    //SEÇÃO DE DECLARAÇÃO
    int i;
    int n1=0,n2=1;
    int aux,soma;

    //SEÇÃO DE COMANDOS
    for (i=0;i<n;i++){
        soma = n1 + n2;

        if (i==0) printf ("%d",soma);

        else printf (" %d",soma);

        aux = n2;
        n2=soma;
        n1 = aux; 
    }
    printf ("\n");
}

int main (){
    int n;

    scanf ("%d",&n);
    fibonacci (n);
    return 0;
    }