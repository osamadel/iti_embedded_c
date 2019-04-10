#include <stdio.h>
#include "../lecture_06/stdtypes.h"
#include "ex04_bits_macros.h"

int main(void) {
    // Y();
    uint_8 x = 1;

    x = SET_BIT(x, 2);
    printf("Set B2 to 1: %d\n", x);
    
    x = CLR_BIT(x, 0);
    printf("Clear B0: %d\n", x);

    x = TOGGLE_BIT(x, 1);
    printf("Toggling B1: %d\n", x);
    x = TOGGLE_BIT(x, 1);
    printf("Toggling B1: %d\n", x);
    return 0;
}