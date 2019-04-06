#include <stdio.h>

int main(void)
{
    int x = 10;
    /* print the string as it is */
    printf("The variable value is x\n");

    /* print the string but substitute with the variable's value */
    printf("The variable value is %d", x);
}