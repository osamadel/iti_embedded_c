#include <stdio.h>

int main(void) {
    int const x = 10;
    int const * ptr = &x; // ptr is pointer to a constant integer
    // *ptr = 20;
    printf("%d\n", x);

    int * ptr2 = &x; // ptr2 is a pointer to an integer
    *ptr2 = 20;
    printf("%d\n", x);

    int * const ptr3 = &x; // ptr3 is constant pointer to an integer
    // ptr3++; // Error: ptr3 is constant and cannot be changed

    int const * const ptr4 = &x; // ptr4 is constant pointer to a constant integer
    // *ptr4++ = 30; // Error: ptr4 is constant so it cannot be incremented, points to a constant
                    //  thus, the value it's pointing to cannot be changed too.
    return 0;
}