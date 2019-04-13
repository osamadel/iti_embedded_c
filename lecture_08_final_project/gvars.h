#ifndef G_VARS
#define G_VARS
    #include <stdlib.h>
    #include "types.h"

    // global definitions
    #define MAX_PASSWORD_TRIALS         3
    #define PASSWORD                    1234
    #define NUMBER_TIME_SLOTS           5
    
    // global variables over all functions in func.c
    struct Patient      * headPatient       = NULL; // points to memory where patient structures are located
    unsigned int        numberOfPatients    = 0;
    unsigned int        timeSlots[5]        = {0};  // stores the IDs associated with each time slot
    unsigned char       slots[5][10]        = {"2:00-2:30", "2:30-3:00", "3:00-3:30", "4:00-4:30", "4:30-5:00"};

#endif