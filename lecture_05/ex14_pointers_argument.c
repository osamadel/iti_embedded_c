#include <stdio.h>
#include "stdtypes.h"

void func(int *);

int main(void) {
    int x = 5;
    int * ptr = &x;
    printf("ptr: %p\n", ptr);
    func(ptr);
    printf("ptr: %p\n", ptr);
    return 0;
}

void func(int * p) {
    p += 1;
    printf("p: %p\n", p);
}