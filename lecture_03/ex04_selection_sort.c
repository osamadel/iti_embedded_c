#include <stdio.h>
void printArr(int *);
int main(void)
{
    int arr[10] = {8, 5, 2, 6, 9, 3, 1, 4, 0, 7};
    int startIdx = 0, smallerIdx = 0, temp = 0;
    printf("UNSORTED:\n");
    printArr(arr);
    for (int i=0; i<9; i++)
    {
        /* take an element and scan it against the rest of list */
        smallerIdx = i;
        for (int j=smallerIdx; j<10; j++)
        {
            if (arr[j] < arr[smallerIdx])
                smallerIdx = j;
        }
        temp = arr[i];
        arr[i] = arr[smallerIdx];
        arr[smallerIdx] = temp;
    }
    printf("\nSORTED:\n");
    printArr(arr);
    return 0;
}

void printArr(int * arr)
{
    for (int i=0; i<10; i++)
        printf("%d ", arr[i]);
}