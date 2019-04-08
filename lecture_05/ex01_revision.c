#include <stdio.h>

int main(void) {
    int const a[5] = {0, 1, 2, 3, 4};
    char * b = "osama adel";
    int * c = a;
    c[0] = 2;
    printf("%d\n", a[0]);
    c[2] = 'e'; // run-time error
    printf("%c\n", b[2]);
    return 0;
}