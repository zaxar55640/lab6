#include <stdio.h>
#include <stdlib.h>

int main() {
    char arr2[] = "Hello";

    for (int i = 0; i < 5; i++) {
        printf("arr2[%d] = %c\n", i, arr2[i]);
    }

    char *arr = malloc(5);
    arr[0] = 'H';
    arr[1] = 'e';
    arr[2] = 'l';
    arr[3] = 'l';
    arr[4] = 'o';

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %c\n", i, arr[i]);
    }

    free(arr);



    free(arr2);

    return 0;
}