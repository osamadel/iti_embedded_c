#include <stdio.h>
#include "stdtypes.h"

struct N {
    uint_8 x: 4;
    uint_8 y: 1;
    uint_8 z;
};

int main(void) {
    struct N a;
    printf("%d\n", sizeof(a));
    // printf("%d\n", sizeof(a.y));
    // printf("%d\n", sizeof(a.z));
    return 0;
}