#include <stdio.h>
#include "stdtypes.h"

typedef union
{
    sint_32 re;
    sint_32 im;
} Complex;

int main(void) {
    Complex real;
    Complex imagine;
    int re = 0, im = 0;
    real.re = 5;
    imagine.im = 4;
    re = real.re;
    im = imagine.im;
    real.re = 7;
    imagine.im = 9;
    re += real.re;
    im += imagine.im;
    
    printf("Sum = %d + i(%d)\n", re, im);
    return 0;
}