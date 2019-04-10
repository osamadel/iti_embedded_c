#include <stdio.h>
#define add(a,b) a+b
#define X 20

int main(void) {
    #if X == add(5,6)
        int x = 5;
        printf("X is 10\n");
    #elif X == add(15,5)
        int x = 5;
        printf("X is 20\n");
    #else
        printf("X is not 10\n");
    #endif
}