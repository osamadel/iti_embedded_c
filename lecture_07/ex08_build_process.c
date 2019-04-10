#include <stdio.h>

int main(void) {
    printf("Hello World!\n");
    return 0;
}

// gcc -E  ex08_build_process.c -o ex08.i
// gcc -S  ex08.i -o ex08.s
// gcc -c  ex08.s -o ex08.o
// gcc  ex08.o -o ex08.exe