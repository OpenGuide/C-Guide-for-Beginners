#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {

	srand(time(NULL));

	int elemVal = 0;
	int findElem = 0;


	int* dinamicArr = NULL;


	puts("Please, enter how many elements in your array");
	scanf("%d", &elemVal);

	puts("Please, enter the element you want to find");
	scanf("%d", &findElem);

	dinamicArr = malloc(sizeof(int) * elemVal);

	for (int i = 0; i < elemVal; i++)
		*(dinamicArr + i) = rand() % 256;

	for (int i = 0; i < elemVal; i++) {
		if (*(dinamicArr + i) == findElem) {
			printf("Element found - location %d\n", i + 1);
			break;
		}

		if (i == (elemVal - 1))
			printf("Element not found\n");
	}

	return 0;
}
