/* Make a function that calculates the first n fibonacci numbers. Bonus points if it is recursive! */
#include <stdio.h>

void fibonacci(int*, int*);

int main(){
  int N_terms;
  int actual, previous, aux;
  printf("How many terms do you wanna see? ");
  scanf("%d", &N_terms);
  previous=0;
  actual=1;
  printf("%d %d ", previous, actual);
  for(int i =0; i<=N_terms; i++){
		aux = actual;
    fibonacci(&actual, &previous);
		previous = aux;
		printf("%d ", actual);
  }
  return 0;
}


void fibonacci(int *a, int *p){
  *a+=*p;
}
