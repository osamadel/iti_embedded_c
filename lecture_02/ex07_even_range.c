#include <stdio.h>
/*  print the sum and average of all even numbers within a given range  */
int main(void)
{
    int start = 0, end = 0, sum = 0;
    float avg = 0, counter = 0;

    printf("Please enter the range of numbers separated by a space: ");
    scanf("%d %d", &start, &end);
    
    if (start > end)
    {
        int temp = start;
        start = end;
        end = temp;
    }

    for (int i=start; i<=end; i++)
    {
        if (i % 2 == 0 && i!=0)
        {
            sum += i;
            counter++;
        }
            
    }
    avg = sum / counter;

    printf("Sum = %d\n", sum);
    printf("Avg = %.2f\n", avg);
    return 0;
}