#include <stdio.h>
#include "stdtypes.h"

struct N {
    uint_8 x;
    uint_16 y;
    float_32 z;
    uint_8 v;
};

int main(void) {
    struct N a;
    printf("%d\n", sizeof(a));
    return 0;
}