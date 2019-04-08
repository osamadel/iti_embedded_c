#include <stdio.h>

struct NAME {
    char x: 4;
    char y: 2;
    char z: 1;
};

int main(void) {
    struct NAME a;
    a.x = 17;
    printf("%d\n", a.x);
}