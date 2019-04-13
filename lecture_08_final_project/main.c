#include "funcs.h"
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    welcomeScreen();
    printf("\n====== Printing All Recrods =======");
    viewAllRecords();
    displayAvailableSlots();
    return 0;
}