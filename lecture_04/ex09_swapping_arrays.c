#include <stdio.h>

int main(void) {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int * ptr1 = arr1;
    int * ptr2 = arr2 + 4;
    int temp = 0;
    for (int i=0; i<5; i++) {
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
    for (int i=0; i<5; i++) printf("%d ", arr1[i]);
    printf("\n");
    for (int i=0; i<5; i++) printf("%d ", arr2[i]);
    printf("\n");

    return 0;
}