#include <stdio.h>

int add(int, int);
void selectionSort(int *, int);
void bubbleSort(int *, int);
void sort(int *, int, void (*)(int *, int));

int main(void) {
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int len = 9;
    void (* sortFunc) (int *, int);
    sortFunc = bubbleSort;
    sort(arr, len, sortFunc);
    for (int i=0; i<len; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

int add(int x, int y) {
    return x+y;
}

void selectionSort(int * arr, int len) {
    printf("Selection Sort is used.\n");
    int startIdx = 0, smallerIdx = 0, temp = 0;
    for (int i=0; i<len-1; i++)
    {
        /* take an element and scan it against the rest of list */
        smallerIdx = i;
        for (int j=smallerIdx; j<len; j++)
        {
            if (arr[j] < arr[smallerIdx])
                smallerIdx = j;
        }
        temp = arr[i];
        arr[i] = arr[smallerIdx];
        arr[smallerIdx] = temp;
    }
}

void bubbleSort(int * arr, int len) {
    printf("Bubble Sort is used.\n");
    int temp = 0;
    for (int i=0; i<len; i++)    {
        for (int j=0; j<len-i-1; j++)   {
            /* push large numbers to the end */
            if (arr[j] > arr[j+1])  {
                /* swap */
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void sort(int * arr, int len, void (* type)(int *, int)) {
    type(arr, len);
}
