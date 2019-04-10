#include <stdio.h>
#include "header files/ex01_include.h"
#include "../lecture_06/stdtypes.h"

int main(void) {
    // 
    uint_16 x = 10;     // use user-defined uint_16 from stdtypes.h
    printf("%d\n", x);
    printName("Osama Adel");    // prototype of this function in ex01_include.h
    return 0;
}

void printName(char * name) {
    printf("%s\n", name);
}