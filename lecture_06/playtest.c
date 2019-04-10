#include <stdio.h>
#include <limits.h>

int main(void) {
    // int a[5] = {1,2,3,4,5,6};
    unsigned long x = 0;
    printf("%d", INT_MAX);
    puts("Enter value of x:");
    scanf("%lu", &x);
    // if (x < UINT_MAX)
    //     printf("%u\n", x++ + ++x);
    // else
    //     printf("\nAbove max value of uint");
    // switch (x) {
    //     case 0:
    //         printf("0\n");
    //         continue;
    //     case 1:
    //     printf("1\n");
    // }
    return 0;
}