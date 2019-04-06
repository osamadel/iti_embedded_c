/** given two arrays, one has even numbers between 0 and 10,
    the other has odd numbers between 0 and 10, merge the two
    arrays to be in order without using sorting techniques  **/
#include <stdio.h>
void printArr(int *);
int main(void)
{
    /* these two arrays are given */
    int arrEven[10] = {0, 2, 4, 6, 8};
    int arrOdd[5] = {1, 3, 5, 7, 9};

    /* merge the two arrays */
    for (int i=9; i>=0; i-=2)
    {
        arrEven[i] = arrOdd[i/2];
        arrEven[i-1] = arrEven[(i-1)/2];
    }
    printArr(arrEven);
    return 0;
}

void printArr(int * arr)
{
    for (int i=0; i<10; i++)
        printf("%d\n", arr[i]);
}