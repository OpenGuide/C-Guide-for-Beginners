#include<stdio.h>
int Add(int i, int j);
int main(){
	int i,j;
	printf("Enter two number: \n");
	scanf("%d %d", &i,&j);
	int r = Add(i,j);
	printf("%d",r);
	return 0;
}
 int Add(int i, int j)
 {
 	int add = i + j;
 	return add;
 }
