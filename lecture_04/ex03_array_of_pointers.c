#include <stdio.h>

void cycleLeft(int ** arr, int len);

int main(void) {
    int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5;
    int * ptr[5] = {&x1, &x2, &x3, &x4, &x5};
    int cycles = 0;
    printf("Please enter the number of cycles: ");
    scanf("%d",&cycles);
    for (int i=0; i<cycles; i++) {
        cycleLeft(ptr, 5);
    }
    for (int i=0; i<5; i++) printf("%d ", *ptr[i]);
    printf("\n");
    return 0;
}

void cycleLeft(int ** arr, int len) {
    int temp = *arr[0];
    for (int i=0; i<len-1; i++) {
        *arr[i] = *arr[i+1];
    }
    *arr[len-1] = temp;
}