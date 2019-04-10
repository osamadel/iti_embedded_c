#include "funcs.h"
#include "gvars.h"
#include <stdio.h>

/* The first screen prompted to the user of the system,
    whether he was admin or a user */
void welcomeScreen(void) {
    puts ("===== Welcome to Clinic Management System =====");
    puts ("Write your access mode and press Enter:");
    char mode = 0;
    while (1) {
        puts ("(1) Admin Mode.");
        puts ("(2) User Mode.");
        scanf("%d", &mode);
        if (mode == 1) {adminMode(); break;}
        else if (mode == 2) {userMode(); break;}
        else puts ("Incorrect Mode. Please choose one of the available modes.");
    }
    
}

void promptAdminOptions(void) {
    puts("Please choose one of the following options:");
    char option = 0;
    puts("(1) Add a new patient");
    puts("(2) Edit a current patient");
    puts("(3) Reserve a slot");
    puts("(4) Cancel a reservation");
    while (1) {
        puts("(1) Add a new patient");
        puts("(2) Edit a current patient");
        puts("(3) Reserve a slot");
        puts("(4) Cancel a reservation");
        scanf("%d", &option);
        switch (option)
        {
            case 1:
                // addPatient();
                return;
            case 2:
                // editPatient();
                return;
            case 3:
                // reserveSlot();
                return;
            case 4:
                // cancelReservation();
                return;
            default:
                puts("Incorrect option. Please choose one of the available options:");
                continue;
        }
    }
}

void adminMode(void) {
    int trialsCounter;
    char exceededMaxTrials = 1;
    unsigned int password = 0;
    for (trialsCounter = 0; trialsCounter < MAX_PASSWORD_TRIALS; trialsCounter++) {
        puts ("Please enter your admin's password:");
        scanf("%d", &password);
        if (password != PASSWORD) {
            printf ("Wrong Passowrd. You have %d trials left.\n", MAX_PASSWORD_TRIALS - trialsCounter - 1);
        }else{
            puts ("Logged in as Admin successfully.");
            exceededMaxTrials = 0;
            break;
        }
    }

    if (exceededMaxTrials) {
        puts ("You exceeded the maximum number of trials to enter the correct password.");
        puts ("Systems is terminating.");
        return;
    }else{
        promptAdminOptions();
    }
}

void userMode(void) {
    puts("User Mode Successful");
}

int addPatient (Patient * patientPtr) {
    
}
int editPatient (unsigned int id, Patient * patientPtr) {

}

void displayAvailableSlots (void) {

}

int reserveSlot (unsigned int id, Slot time) {

}

int cancelReservation (unsigned int id) {

}

void viewRecord (unsigned int id) {

}

void viewReservations (void) {
    
}