#include <stdio.h>
#include "print_arr.h"

int binarySearch(int * arr, int len, int num);
void insertionSort(int * arr, int len);

int main(void) {
    int arr[10] = {80, 5, 21, 62, 91, 30, 1, 14, 0, 7};
    int foundIdx = 0, searchNumber = 0;

    /* print the original array */
    printf("Array: ");
    printArr(arr, 10);

    /* sort and print the array */
    insertionSort(arr, 10);
    printf("\nArray after sorting: ");
    printArr(arr, 10);

    /* take in the number to look for */
    printf("\nPlease enter the number to search for: ");
    scanf("%d", &searchNumber);

    /* save the index of the found result */
    foundIdx = binarySearch(arr, 10, searchNumber);

    if (foundIdx != -1)
        printf("\n%d is found at index %d", searchNumber, foundIdx);
    else
        printf("\nThis number is not found");
    return 0;
}

int binarySearch(int * arr, int len, int num) {
    int sindex = 0, endIndex = len - 1;
    do{
        int mid = sindex + (endIndex - sindex) / 2;
        if (arr[mid] == num) return mid;
        else if (arr[mid] < num) {
            sindex = mid;
        }else{
            endIndex = mid;
        }
    }while(sindex != endIndex);
    return -1;
}

void insertionSort(int * arr, int len) {
    int hole, value;
    for (int i=1; i<len; i++) {
        value = arr[i];
        hole = i;
        while (hole > 0 && arr[hole-1] > value) {
            arr[hole] = arr[hole - 1];
            hole--;
        }
        arr[hole] = value;
    }
    return;
}