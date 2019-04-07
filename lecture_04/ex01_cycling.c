#include <stdio.h>

void cycleLeft(int *, int);

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = 9, cycles = 0;
    printf("Please enter the number of cycles: ");
    scanf("%d", &cycles);

    for (int i=0; i<cycles; i++)
        cycleLeft(arr, len);
    for (int i=0; i<len; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

void cycleLeft(int * arr, int len) {
    int temp = arr[0];
    for (int i=0; i<len-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[len-1] = temp;
}