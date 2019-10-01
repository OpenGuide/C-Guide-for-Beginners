#include <stdio.h>
#include <stdlib.h>

int fibo_r(int n){
	if (n == 1 || n == 2){
	//	printf("1\n");
		return 1;
	}else{
//		printf("%d", (fibo_r(n-1) + fibo_r(n-2)));
		return (fibo_r(n-1) + fibo_r(n-2));
	}
}

int main(){
	int number;
	printf("Typen any number: ");
	scanf("%d", &number);
	for(int i = 0; i < number; i++){
        int fib = fibo_r(i+1);
    	printf("%d\n", fib);
//		printf("%d ", fibo_r(i+1));
	}
}
