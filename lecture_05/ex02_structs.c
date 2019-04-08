#include <stdio.h>
#include "stdtypes.h"


struct Person {
    uint_8 firstName[20];
    uint_8 lastName[20];
    uint_8 age;
    float_32 salary;
};

int main(void) {
    struct Person me = {"Osama", "Adel", 26, 8000.0};
    printf("full name: %s %s\n", me.firstName, me.lastName);
    return 0;
}