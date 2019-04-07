#include <stdio.h>

int main(void) {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int x;
    printf("%d\n", arr[1][0]);
    int (*ptr)[3] = arr; // pointer that points to an array of 3 elements
    printf("arr: %p\n", arr);
    printf("arr[0]: %p\n", arr[0]);
    printf("ptr: %p\n", ptr);
    printf("*(arr+1): %p\n", *(arr+1));
    printf("*(ptr+1): %p\n", *(ptr+1));
    x = *(*(ptr+1));
    printf("%d\n", x);

    return 0;
}