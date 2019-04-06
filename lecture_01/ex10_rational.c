#include <stdio.h>

int main(void)
{
    int x = 10;
    printf("x >= 10: %d\n", x>=10);
    printf("x <= 10: %d\n", x<=10);
    x = 1;
    int y = 0;
    printf("x && y: %d\n", x && NULL);
}