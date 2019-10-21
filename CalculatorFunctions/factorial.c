#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, num;
  long long int factorial=1;

  printf("Type a number you want the factorial (number<=20): ");
  scanf("%d", &num);

  for(i=1; i<=num; i++){
    factorial*= i;
  }

  printf("%d! = %lld", num, factorial);
  return 0;
}
