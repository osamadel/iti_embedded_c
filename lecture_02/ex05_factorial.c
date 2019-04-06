#include <stdio.h>
/* compute the factorial of a number using do-while */
int main(void)
{
    int x = 0, fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &x);
    do{
        fact *= x--;
    } while (x > 1);
    printf("Factorial = %d", fact);
    return 0;
}