#include <stdio.h>

int main(void) {
    int arr [5];
    long * ptr = arr;
    printf("size of arr: %d\n", sizeof(arr));
    printf("size of ptr: %d\n", sizeof(ptr));
    return 0;
}