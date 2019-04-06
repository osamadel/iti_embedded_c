#include <stdio.h>

int main(void)
{
    int x = 10;
    x += 2;
    printf("x: %d\n", x);

    x =+ 2;
    printf("x: %d\n", x);

    x -= 2;
    printf("x: %d\n", x);

    x =- 2;
    printf("x: %d\n", x); 
    return 0;
}