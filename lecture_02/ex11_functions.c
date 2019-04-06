#include <stdio.h>

void add(int, int);

int main(void)
{
    int a = 3, b = 7;
    add(a, b);
    return 0;
}

void add(int x, int y)
{
    printf("%d + %d = %d\n",x, y, x + y);
}