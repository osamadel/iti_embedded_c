#include <stdio.h>
#include "stdtypes.h"

#pragma pack(1)
struct N {
    uint_8 x;
    uint_16 y;
    float_32 z;
    uint_8 v;
};

#pragma pack(4)
struct M {
    uint_8 x;
    uint_16 y;
    float_32 z;
    uint_8 v;
};

struct S {
    int x[10];
    int y;
};

int main(void) {
    struct N a;
    struct M b;
    struct S s = {1};
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(s));
    return 0;
}