#warning "Hello, this is just a warning"
#define ERROR
#include <stdio.h>

int main(void) {
    printf("The code should be running\n");
    #ifndef ERROR
        #error "Error here"
    #endif
    return 0;
}