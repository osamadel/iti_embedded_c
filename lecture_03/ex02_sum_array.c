/* receive 10 numbers from the user then compute then print their sum and average */
#include <stdio.h>

int main(void)
{
    int arr[10];
    int sum = 0;
    float avg = 0;
    
    for (int i=0; i<10; i++)
    {
        printf("Please enter number #%d: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / 10.0;

    printf("sum = %d\naverage = %.2f\n", sum, avg);
    return 0;
}
