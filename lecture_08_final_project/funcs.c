#include "funcs.h"
#include "gvars.h"
#include <stdio.h>
#include <string.h>

/* The first screen prompted to the user of the system,
    whether he was admin or a user */
void welcomeScreen(void) {
    puts ("===== Welcome to Clinic Management System =====");
    puts ("Write your access mode and press Enter:");
    char mode = 0;  // stores user's mode, 1: Admin, 2:User
    while (1) {
        puts ("(1) Admin Mode.");
        puts ("(2) User Mode.");
        printf(">> ");
        scanf("%d", &mode);
        if (mode == 1) {adminMode(); break;}    // go to Admin Mode prompt and break after you finish
        else if (mode == 2) {userMode(); break;} // go to User Mode prompt and break after you finish
        else puts ("Incorrect Mode. Please choose one of the available modes.");
    }
    
}

void promptAdminOptions(void) {
    char patientName[20];
    char patientGender;
    unsigned int patientAge;
    unsigned int id;

    char option = 0;
    while (1) {
        puts("Please choose one of the following options:");
        puts("(1) Add a new patient");
        puts("(2) Edit a current patient");
        puts("(3) Reserve a slot");
        puts("(4) Cancel a reservation");
        puts("(5) Terminate");
        puts("------------------------");
        printf(">> ");
        scanf("%d", &option);
        switch (option)
        {
            case 1:     // New patient
                // prompt user for patient's name
                printf("Enter the patient's ID: ");
                scanf("%d", &id);
                
                // prompt user for patient's name
                printf("Enter the patient's name: ");
                scanf("%s", &patientName);

                // prompt user for patient's age
                printf("Enter the patient's age: ");
                scanf("%d", &patientAge);
                
                // prompt user for patient's gender
                getchar();
                printf("Enter the patient's gender (M or F): ");
                patientGender = (char) getchar();
                
                // add the new patient's data to the list of patients
                if (addPatient(id, patientName, patientAge, patientGender) == -1) {
                    puts("**** This ID is repeated ****\n****Please check if this patient is already registered ****");
                    continue;
                }else
                    puts("**** Patient was added successfully ****");
                break;
            case 2:     // Edit patient
                // prompt user for patient's name
                printf("Enter the patient's ID: ");
                scanf("%d", &id);
                
                // prompt user for patient's name
                printf("Enter the new patient's name: ");
                scanf("%s", &patientName);

                // prompt user for patient's age
                printf("Enter the new patient's age: ");
                scanf("%d", &patientAge);
                
                // prompt user for patient's gender
                getchar();
                printf("Enter the new patient's gender (M or F): ");
                patientGender = (char) getchar();
                
                // add the new patient's data to the list of patients
                if (editPatient(id, patientName, patientAge, patientGender) == -1) {
                    puts("**** This ID was not found ****\n**** Please use a valid ID ****");
                    continue;
                }else
                    puts("**** Patient was edited successfully ****");
                break;
            case 3:
                // reserveSlot();
                return;
            case 4:
                // cancelReservation();
                return;
            case 5:
                return;
            default:
                puts("**** Incorrect option ****\n**** Please choose one of the available options ****");
                continue;
        }
    }
}

void adminMode(void) {
    int trialsCounter;
    char exceededMaxTrials = 1;
    unsigned int password = 0;
    for (trialsCounter = 0; trialsCounter < MAX_PASSWORD_TRIALS; trialsCounter++) {
        puts ("\nPlease enter your admin's password:");
        scanf("%d", &password);
        if (password != PASSWORD) {
            printf ("**** Wrong Passowrd ****\nYou have %d trials left.\n", MAX_PASSWORD_TRIALS - trialsCounter - 1);
        }else{
            puts ("**** Logged in as Admin successfully ****");
            exceededMaxTrials = 0;
            break;
        }
    }

    if (exceededMaxTrials) {
        puts ("**** You exceeded the maximum number of trials to enter the correct password ****");
        puts ("- Systems is terminating -");
        return;
    }else{
        promptAdminOptions();
    }
}

void userMode(void) {
    puts("User Mode Successful");
}

int addPatient (unsigned int id, char * patientName, unsigned int patientAge, char patientGender) {
    if (!headPatient) {
        headPatient = (struct Patient *) calloc(++numberOfPatients, sizeof(struct Patient));
    }else{
        // "realloc can be really slow" -> check if this is true
        headPatient = (struct Patient *) realloc(headPatient, ++numberOfPatients * sizeof(struct Patient));
    }
    strcpy(headPatient[numberOfPatients - 1].name, patientName);    
    headPatient[numberOfPatients - 1].age = patientAge;
    headPatient[numberOfPatients - 1].gender = patientGender;
    for (int i=0; i < numberOfPatients; i++)
        if (headPatient[i].ID == id)
            return -1;      // the id is repeated
    headPatient[numberOfPatients - 1].ID = id;
    return 0;
}

int editPatient (unsigned int id, char * patientName, unsigned int patientAge, char patientGender) {
    for (int i = 0; i < numberOfPatients; i++) {
        if (headPatient[i].ID == id) {
            strcpy(headPatient[i].name, patientName);
            headPatient[i].age = patientAge;
            headPatient[i].gender = patientGender;
            return 0;
        }
    }
    return -1;      // ID was not fount

}

void displayAvailableSlots (void) {

}

int reserveSlot (unsigned int id, Slot time) {

}

int cancelReservation (unsigned int id) {

}

void viewRecord (unsigned int id) {
    for (int i = 0; i < numberOfPatients; i++) {
        if (headPatient[i].ID == id) {
            puts("");
            printf("ID:%\t\t%d\n", headPatient[i].ID);
            printf("NAME:%\t\t%s\n", headPatient[i].name);
            printf("AGE:%\t\t%d\n", headPatient[i].age);
            printf("GENDER:%\t\t%c\n", headPatient[i].gender);
            puts("===================");
        }
    }

}

void viewReservations (void) {
    
}

void viewAllRecords(void) {
    for (int i = 0; i < numberOfPatients; i++) {
        viewRecord(headPatient[i].ID);
    }
}