#include <stdio.h>
/* print the multiplication table of a given number */
int main(void)
{
    int x = 0;
    
    printf("Enter the number to display its multiplication table: ");
    scanf("%d", &x);

    for (int i=1; i<= x; i++)
        printf("%d x %d = %d\n", x, i, x*i);
    return 0;
}