#include <stdio.h>

int main(void)
{
    int x = 10;
    printf("Please enter the width: ");
    scanf("%d", &x);
    for (int i=0; i<x; i++)
    {
        if (i == 0 || i == (x) - 1)
        {
            for (int j=i; j>0; j--)
                printf(" ");
            for (int j=0; j<x; j++)
                printf("*");
        }else{
            for (int j=i; j>0; j--)
                printf(" ");
            for (int j=0; j<x; j++)
            {
                if (j == 0 || j == x-1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}