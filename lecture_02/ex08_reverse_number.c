#include <stdio.h>
/*  reverse digits in a number */
int main(void)
{
    int x = 0, rev_x = 0, digit = 0;
    printf("Please enter a number to reverse: ");
    scanf("%d", &x);
    do{
        digit = x % 10;
        rev_x = rev_x * 10 + digit;
        x /= 10;
    } while(x != 0);

    printf("Reveresed number = %d", rev_x);
    return 0;
}