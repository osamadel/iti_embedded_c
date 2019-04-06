#include <stdio.h>
/*  calculate the power of a given base and exponent using loops  */
int main(void)
{
    int base = 1, exp = 1, res = 1;
    printf("Please enter the base and exponent (in order) separated by a space: ");
    scanf("%d %d", &base, &exp);

    for (int i=0; i<exp; i++)
        res *= base;

    printf("%d ^ %d = %d\n", base, exp, res);
    return 0;
}