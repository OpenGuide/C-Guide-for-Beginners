#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int i, array_size, to_search;
    printf("Choose the array size: ");
    scanf("%d", &array_size);
    int array[array_size];
    for (i = 0; i < array_size; i++) {
        array[i] = rand()%100 + 1;
    }
    printf("Choose the number to search: ");
    scanf("%d", &to_search);
    int found = 0;
    for (i = 0; i < array_size; i++) {
        if (array[i] == to_search) {
            if (!found) {
                printf("The number %d is in position %d", to_search, i);
            }
            else {
                printf(" and position %d", i);
            }
            found = 1;
        }
    }
    if (!found) printf("The number %d is not present in the array\n", to_search);
    else printf("\n");

    return 0;
}
