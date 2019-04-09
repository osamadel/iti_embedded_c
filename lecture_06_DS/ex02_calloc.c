#include <stdio.h>
#include <stdlib.h>             // include the standard library to use calloc

int main(void) {
    char * ptr;                 // pointer to the block of memory reseved by malloc
    int sum = 0;                // variable to store the sum of elements of the block
    // void * p = &sum;
    // printf("%p -> %p\n", p, ++p);
    ptr = (char *) calloc(10, sizeof(char));

    for (int i=0; i<10; i++) {
        printf("Enter #%d: ", i+1);
        scanf("%d", &ptr[i]);
    }

    for (int i=0; i<10; i++) {
        sum += ptr[i];
    }

    printf("Summation = %d\n", sum);
    return 0;
}