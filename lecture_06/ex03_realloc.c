#include <stdio.h>
#include <stdlib.h>             // include the standard library to use malloc, calloc
#include "stdtypes.h"

int main(void) {
    uint_8 * ptr;
    uint_8 *ptr2;
    int size = 10, new_size = 20;
    int sum = 0;
    ptr = (uint_8 *) calloc(size, sizeof(uint_8));
    ptr2 = ptr;
    for (int i=0; i < size; i++) {
        printf("enter #%d: ", i+1);
        scanf("%d", &ptr[i]);
    }
    // free(ptr);
    for (int i=0; i < size; i++)
        printf("%d ", ptr2[i]);
    puts("");
    printf("sum = %d\n", sum);
    // sum = 0;
    // ptr = (uint_8 *) realloc(ptr, new_size * sizeof(uint_8));
    // for (int i=size; i < new_size; i++) {
    //     printf("enter #%d: ", i+1);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i=0; i < new_size; i++)
    //     sum += ptr[i];
    
    // printf("sum = %d\n", sum);
    return 0;
}