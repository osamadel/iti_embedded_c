#include <stdio.h>
#include "print_arr.h"

int main(void) {
    /* start code here */
    int arr[10] = {8, 5, 2, 6, 9, 3, 1, 4, 0, 7};
    int hole, value;
    for (int i=1; i<10; i++) {
        value = arr[i];
        hole = i;
        /* Insertion Sort Algorithm
               5
            8 ( ) 2
             hole
             5   
        --> ( ) 8 2 [5 < 8 ==> shift the hole one step to the left, swap the hole]
        --> (5) 8 2 [insert the number]
        NEXT NUMBER:
             2
        5 8 ( )
            hole
               2
        --> 5 ( ) 8 [2 < 8 ==> shift the hole one step to the left, swap the hole]
             2
        --> ( ) 5 8 [2 < 5 ==> shift the hole one step to the left, swap the hole]
        --> (2) 5 8 [insert the number]
        */
        while (hole > 0 && arr[hole-1] > value) {
            arr[hole] = arr[hole - 1];
            hole--;
        }
        arr[hole] = value;
    }
    printArr(arr, 10);
    return 0;
}