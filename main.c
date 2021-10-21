#include <stdio.h>
#include <stdlib.h>

int main() {
    char arr[] = "Hello";

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %c\n", i, arr[i]);
    }

    char *arr2 = malloc(5);
    arr2[0] = 'H';
    arr2[1] = 'e';
    arr2[2] = 'l';
    arr2[3] = 'l';
    arr2[4] = 'o';

    for (int i = 0; i < 5; i++) {
        printf("arr2[%d] = %c\n", i, arr2[i]);
    }
    free(arr2);

    return 0;
}