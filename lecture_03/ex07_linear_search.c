/* search for how many times a number exists in an array */
#include <stdio.h>
#include "print_arr.h"

int main(void) {
    int arr[] = {1, 4, 2, 3, 5, 1, 3, 7, 8, 4, 7, 9, 0, 3, 6, 7, 1};
    int searchNumber = 0, count = 0;
    printf("The Array: ");
    printArr(arr, 17);

    printf("\nPlease enter a number to find how many of it is in the array: ");
    scanf("%d", &searchNumber);
    /* increment count each time an occurance of searchNumber is found in arr */
    for (int i=0; i<17; i++) {
        if (arr[i] == searchNumber)
            count++;
    }
    if (count != 0)
        printf("%d exists %d time(s) in the array\n", searchNumber, count);
    else
        printf("Value not found\n");
    return 0;
}