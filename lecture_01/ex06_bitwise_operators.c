#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Enter two numbers separated by a space: ");

    scanf("%d %d", &x, &y);

    printf("X:%X \tAND \tY:%X = %X\n", x, y, x & y);
    printf("X:X \tOR \tY:%X = %X\n", x, y, x | y);
    printf("X:%X \tXOR \tY:%X = %X\n", x, y, x ^ y);

    return 0;
}