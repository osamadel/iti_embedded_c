#include <stdio.h>

#define print() printf("Hello "); \
                printf("world, "); \
                printf("Osama\n")

// do-while is used to ensure the whole block is executed or the whole block not executed
#define printComplete() do {printf("Hello "); \
                            printf("world, "); \
                            printf("Osama\n");} while(0)

int main(void) {
    int x = 1;
    if (!x)
        print();
    printf("END IF\n");
    x = 0;
    if (!x)
        printComplete();
    printf("END IF\n");
    return 0;
}