#include <stdio.h>
/*  find the integer sqrt of a number  */
int main(void)
{
    int num = 0, sqrt = 0;
    printf("Please enter an integer: ");
    scanf("%d", &num);

    for (int i=1; i<num/2; i++)
    {
        if (i*i == num)
        {
            printf("Sqrt(%d) = %d\n", num, i);
            return 0;
        }
    }
    printf("There is no square root\n");
    return 0;
}