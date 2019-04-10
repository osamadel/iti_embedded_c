// when including hfile.h, HFILE1 is not defined, so it will define it and include hfile2 and hfile3
// in turn, when hfile2 and hfile3 get included for the first time, HFILE2 and HFILE3 are not defined
// so they get defined, however, both of them include hfile1, but since HFILE1 has already been defined
// ifndef HFILE1 will evaluate to false and it won't proceed.
#include "ex07_hfile1.h"
// when hfile2 get included, it has already been included inside hfile1, and therefore,
// ifndef HFILE2 will evaluate to false and won't proceed.
#include "ex07_hfile2.h"
// The same as hfile2
#include "ex07_hfile3.h"
#include <stdio.h>

int w = 20;
int w;
int w = 10;

int main(void) {
    printf("%d\n", w);
}