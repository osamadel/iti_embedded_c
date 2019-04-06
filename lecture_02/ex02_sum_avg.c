#include <stdio.h>

int main(void)
{
    /*  remeber to initialize your variables to avoid using them while
        they store garbage values  */
    int sum = 0;
    float avg = 0;
    int number = 0;

    for (int i=0; i<10; i++)
    {
        printf("Please enter number #%d: ", i+1);
        scanf("%d", &number);
        sum += number;
    }
    avg = sum / 10.0;

    printf("Summation = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}