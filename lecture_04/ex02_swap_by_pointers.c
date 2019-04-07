#include <stdio.h>

void swap(int *, int*);

int main(void) {
    int x = 0, y = 0;
    /* int * ptr;
    printf("%p", *ptr); */
    printf("Please enter x and y separated by a space: ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("Swapped: x: %d y: %d\n", x, y);

    return 0;
}

void swap (int * x, int * y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}