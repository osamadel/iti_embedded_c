#include <stdio.h>
#include "stdtypes.h"
int f(void);

int x = 10;
int main(void) {
    uint_8 x = 5;
    printf("%d\n", x);
    for (int i=0; i<10; i++)
    {
        x = f();
        printf("%d\n", x);
    }
    return 0;
}

int f(void) {
    static uint_8 x = 10;
    x++;
    return x;
}