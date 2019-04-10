#warning "Hello, this is just a warning"
#include <stdio.h>

int main(void) {
    printf("The code should be running\n");
    #error "Error here"
    return 0;
}