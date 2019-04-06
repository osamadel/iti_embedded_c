#include <stdio.h>
#include "stdtypes.h"

int main(void) {
    char x = 200;
    printf("%d", x);    // -56
    
    printf("\nsizeof(char) = %d", sizeof(char));
    printf("\nsizeof(int) = %d", sizeof(int));
    printf("\nsizeof(short) = %d", sizeof(short));
    printf("\nsizeof(long) = %d", sizeof(long));
    printf("\nsizeof(float) = %d", sizeof(float));
    printf("\nsizeof(double) = %d", sizeof(double));
    printf("\nsizeof(long double) = %d", sizeof(long double));
    printf("\nsizeof(x) = %d", sizeof(x));

    printf("\nsizeof(uint_8) = %d", sizeof(uint_8));
    printf("\nsizeof(uint_32) = %d", sizeof(uint_32));
    printf("\nsizeof(uint_16) = %d", sizeof(uint_16));
    printf("\nsizeof(uint_64) = %d", sizeof(uint_64));
    printf("\nsizeof(float_32) = %d", sizeof(float_32));
    printf("\nsizeof(float_64) = %d", sizeof(float_64));
    printf("\nsizeof(float_96) = %d", sizeof(float_96));
    return 0;
}