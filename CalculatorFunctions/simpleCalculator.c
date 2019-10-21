#include <stdio.h>

int main(void) {
  int  option;
  double num1, num2, result=0;

  printf("Choose the option you want:\n> 1 sum\n> 2 subtraction\n> 3 division\n> 4 multiplication\n");
  scanf("%d", &option);
  printf("Type the numbers you want to use(num1 num2):\n");
  scanf("%lf %lf", &num1, &num2);

  switch(option){
    case 1:
      result = num1 + num2;
      break;
    case 2:
      result = num1 - num2;
      break;
    case 3:
      result = num1/num2;
      break;
    case 4:
      result = num1*num2;
      break;
  }
  printf("Result: %lf", result);


  return 0;
}
