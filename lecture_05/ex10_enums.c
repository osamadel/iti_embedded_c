#include <stdio.h>
#include "stdtypes.h"

enum WEEKS {SAT=1, SUN, MON=30, TUE, WED, THU, FRI};

int main(void) {
    enum WEEKS x;
    x = 10;
    printf("%d\n", sizeof(x));
    return 0;
}
