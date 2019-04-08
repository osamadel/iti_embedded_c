#include <stdio.h>
#include "stdtypes.h"

typedef union
{
    struct
    {
        uint_8 B0 : 1;
        uint_8 B1 : 1;
        uint_8 B2 : 1;
        uint_8 B3 : 1;
        uint_8 B4 : 1;
        uint_8 B5 : 1;
        uint_8 B6 : 1;
        uint_8 B7 : 1;
    } bits;

    uint_8 byte;
} Register;

int main(void) {
    Register x;
    x.bits.B2 = 1;
    printf("Register = %d\n", x.byte);
    return 0;
}
