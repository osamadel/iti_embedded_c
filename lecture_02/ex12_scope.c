#include <stdio.h>

void sum(void);

int main(void)
{
    int x = 0;  // local variable for main
    int y = x + 5;
    printf("y: %d\n", y);   
    sum();
    return 0;
}

void sum(void)
{
    int z = x + 6;  // x is undeclared
    printf("z: %d\n", z);
}