#include <stdio.h>
/*  factorial using recursive functions  */
int fact(int);

int main(void)
{
    int x, res;
    printf("Please enter an integer: ");
    scanf("%d", &x);
    res = fact(x);
    printf("Fact(%d) = %d", x, res);
    return 0;
}

int fact(int x)
{
    if (x == 2)
        return 2;
    else
        return x * fact(x-1); 
}