#include <stdio.h>

int main(void)
{

    unsigned char x = 0xCC;
    unsigned char y = x << 4;
    unsigned char z = (x >> 4) << 2;
    printf("x: %d\ny: %d\nz: %d\n", x, y, z);

    unsigned char r = y | z;
    printf("r: %d\n", r);
    return 0;
}