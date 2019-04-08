#include <stdio.h>

typedef struct {
    int arr[5];
} N;

int main(void) {
    N x = {{1,2,3,4,5}}, y;
    y = x;
    printf("%p\n%p\n", x.arr, y.arr);
    return 0;
}