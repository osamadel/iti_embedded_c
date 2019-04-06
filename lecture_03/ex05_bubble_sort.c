/* sort an array using bubble sort algorithm */
#include <stdio.h>
#include "print_arr.h"

int main(void)
{
    int arr[] = {7, 31, 61, 79, 29 ,103, 37, 47, 53, 89, 5, 13, 83, 101, 17, 11, 59, 41, 97, 3, 19, 67, 73, 23, 43, 71 };
    int temp = 0;

    for (int i=0; i<26; i++)    {
        for (int j=0; j<26-i; j++)   {
            /* push large numbers to the end */
            if (arr[j] > arr[j+1])  {
                /* swap */
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printArr(arr, 26);
    return 0;
}