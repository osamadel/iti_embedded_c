#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter a number to check if it's even or odd: ");
    scanf("%d", &x);
    if (x % 2 == 0)
        printf("%d is even.\n", x);
    else
        printf("%d is odd.\n", x);
    return 0;
}