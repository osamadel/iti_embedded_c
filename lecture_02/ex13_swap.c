#include <stdio.h>

void swap(int, int);

int main(void)
{
    int x = 0, y = 0;
    printf("Please enter two numbers to be swapped: ");
    scanf("%d %d", &x, &y);
    swap(x, y);
    return 0;
}

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("Swapped: %d %d\n", x, y);
}