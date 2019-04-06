#include <stdio.h>
/*  printing a diamond-shape stars  */
int main(void)
{
    int h = 0, b = 0, current_b = 0;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &h);
    b = 2 * h - 1;
    for (int i=1; i<=h; i++)
    {
        current_b = 2*i-1;
        for (int j=1; j <= b; j++)
        {
            if (j <= (b - current_b) / 2)
                printf(" ");
            else if (j <= ((b - current_b) / 2) + (current_b))
                printf("*");
        }
        printf("\n");
    }

    for (int i=h-1; i>=1; i--)
    {
        current_b = 2*i-1;
        for (int j=1; j <= b; j++)
        {
            if (j <= (b - current_b) / 2)
                printf(" ");
            else if (j <= ((b - current_b) / 2) + (current_b))
                printf("*");
        }
        printf("\n");
    }
    return 0;
}