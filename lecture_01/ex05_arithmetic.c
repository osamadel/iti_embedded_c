/** Ask user for two numbers, then print their addition,
    subtraction, multiplication and division. **/
#include <stdio.h>

int main(void)
{
    /* Declare our variables. */
    int x, y;

    /* Prompt the user to enter two space-separated numbers. */
    printf("Enter two numbers separated by a space: ");

    /* Scan user's input. */
    scanf("%d %d", &x, &y);

    /* Print the arithmetic operations. */
    printf("%d + %d = %d\n", x, y, x+y);
    printf("%d - %d = %d\n", x, y, x-y);
    printf("%d * %d = %d\n", x, y, x*y);
    printf("%d / %d = %d\n", x, y, x/y);
    return 0;
}