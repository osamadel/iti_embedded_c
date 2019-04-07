#include <stdio.h>

int main(void) {
    int x = 10, y = 20;
    int * ptr1 = &x, * ptr2 = &y;
    printf("%p - %p = %d\n", ptr1, ptr2, ptr1-ptr2); // 94 - 90 = 1 (number of steps)
    printf("%p + 1 = %p\n", ptr1, ptr2, ptr1+1);
    return 0;
}