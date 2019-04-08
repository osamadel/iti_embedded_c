#include <stdio.h>
#include "stdtypes.h"

typedef struct
{
    sint_32 re;
    sint_32 im;
} Complex;

Complex addComplex(Complex c1, Complex c2);

int main(void) {
    Complex num1 = {3, 2};
    Complex num2 = {1, -1};
    printf("(%d+(%d)) + (%d+(%d)) = ", num1.re, num1.im, num2.re, num2.im);
    Complex add = addComplex(num1, num2);
    printf("(%d+(%d))\n", add.re, add.im);
    return 0;
}

Complex addComplex(Complex c1, Complex c2) {
    Complex c3 = {c1.re + c2.re, c1.im + c2.im};
    return c3;
}