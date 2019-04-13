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
        puts ("(3) Terminate.");
        printf(">> ");
        scanf("%d", &mode);
        if (mode == 1) {adminMode(); /* break; */}    // go to Admin Mode prompt and break after you finish
        else if (mode == 2) {userMode(); /* break; */} // go to User Mode prompt and break after you finish
        else if (mode == 3) {break;} // go to User Mode prompt and break after you finish
        else puts ("**** Incorrect Mode ****\n**** Please choose one of the available modes ****");
    }
    
}
/*  prompt the user with 5 options:
    (1) add a new patient
    (2) edit a registered patient
    (3) reserve a time slot
    (4) cancel a reservation
    (5) terminate the program
    This functions prompts the user after his selection with the appropriate
    message, receiving input from the user and passing the values to specialized
    functions */
void promptAdminOptions(void) {
    char patientName[20];
    char patientGender;
    unsigned int patientAge;
    unsigned int id;
    unsigned int slotChoice = 0;
    char IDfound = 0;

    char option = 0;
    while (1) {
        puts("\nPlease choose one of the following options:");
        puts("(1) Add a new patient");
        puts("(2) Edit a current patient");
        puts("(3) Reserve a slot");
        puts("(4) Cancel a reservation");
        puts("(5) Back");
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
                while (1) {
                    puts("Please choose one of the available time slots:");
                    displayAvailableSlots();
                    puts("");
                    scanf("%d", &slotChoice);
                    if (slotChoice < 1 || slotChoice > 5) {
                        puts("**** Invalid choice ****");
                        continue;
                    }else break;
                }
                
                printf("\nPlease enter the patient's ID: ");
                scanf("%d", &id);
                // Check if the provided ID is a patient's ID
                for (int i=0; i<numberOfPatients; i++)
                    if (headPatient[i].ID == id) IDfound = 1;
                if (!IDfound) {
                    puts("**** This ID is not a registered patient's ID ****");
                    continue;
                }
                    // check of this ID is already registered for the provided time slot
                    if (reserveSlot(id, slotChoice) == -1) {
                        puts("**** This ID is already registered for this time slot ****");
                        continue;
                    }
                // if this line is reached, then the reservation is done successfully
                puts("**** Time Slot Reserved Successfully ****");
                break;
            case 4:
                while (1) {
                    printf("\nPlease enter a patient's ID to cancel his reservation: ");
                    scanf("%d", &id);
                    if (cancelReservation(id) == -1) {
                        puts("**** There is no time slot reserved with this ID ****");
                        continue;
                    }else break;
                }
                puts("**** Cancellation Successful ****");
                break;
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
            puts ("\n**** Logged in as Admin successfully ****\n");
            exceededMaxTrials = 0;
            break;
        }
    }

    if (exceededMaxTrials) {
        puts ("\n**** You exceeded the maximum number of trials to enter the correct password ****\n");
        puts ("- Systems is terminating -");
        return;
    }else{
        promptAdminOptions();
    }
}

void userMode(void) {
    // puts("User Mode Successful");
    char option = 0;
    unsigned int id = 0;
    int foundID = 0;
    while (1) {
        puts("\nPlease choose one of the following options:");
        puts("(1) View patient record");
        puts("(2) View today's reservations");
        puts("(3) Back");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            while (1) {
                puts("Please enter the patient's ID: ");
                scanf("%d", &id);
                for (int i=0; i<numberOfPatients; i++)
                    if (headPatient[i].ID == id) foundID = 1;
                if (!foundID) {
                    puts("**** There is no patient registered with this ID ****");
                    continue;
                }else break;
            }
            viewRecord(id);
            break;
        case 2:
            viewReservations();
            break;
        case 3:
            return;
        default:
            puts("**** Invalid Option ****");
            return;
        }
    }
}

int addPatient (unsigned int id, char * patientName, unsigned int patientAge, char patientGender) {
    if (!headPatient) {
        headPatient = (struct Patient *) calloc(++numberOfPatients, sizeof(struct Patient));
    }else{
        // "realloc can be really slow" -> check if this is true
        headPatient = (struct Patient *) realloc(headPatient, ++numberOfPatients * sizeof(struct Patient));
    }
    for (int i=0; i < numberOfPatients; i++)
        if (headPatient[i].ID == id)
            return -1;      // the id is repeated
    strcpy(headPatient[numberOfPatients - 1].name, patientName);    
    headPatient[numberOfPatients - 1].age = patientAge;
    headPatient[numberOfPatients - 1].gender = patientGender;
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
    for (int i=0; i<NUMBER_TIME_SLOTS; i++) {
        if (timeSlots[i] == 0)
            printf("\n(%d) %s", i+1, slots[i]);
    }
}

int reserveSlot (unsigned int id, unsigned int time) {
    /* assume that time will take a value 1,2,3,4 or 5 */
    if (timeSlots[time - 1] == id) return -1;     // if the id is already reserving this time slot, return -1
    else timeSlots[time - 1] = id;                // otherwise, assign this id to this time slot
    return 0;
}

int cancelReservation (unsigned int id) {
    for (int i=0; i<NUMBER_TIME_SLOTS; i++) {
        if (timeSlots[i] == id) {
            timeSlots[i] = 0;
            return 0;
        }
    }
    return -1;
}

void viewRecord (unsigned int id) {
    for (int i = 0; i < numberOfPatients; i++) {
        if (headPatient[i].ID == id) {
            printf("ID:%\t\t%d\n", headPatient[i].ID);
            printf("NAME:%\t\t%s\n", headPatient[i].name);
            printf("AGE:%\t\t%d\n", headPatient[i].age);
            printf("GENDER:%\t\t%c\n", headPatient[i].gender);
            puts("===================");
        }
    }

}

void viewReservations (void) {
    int noReservations = 0;
    for (int i=0; i<NUMBER_TIME_SLOTS; i++) {
        if (timeSlots[i] != 0) {
            printf("\nID %d reserved slot %s", timeSlots[i], slots[i]);
            noReservations = 1;
        }
    }
    if (!noReservations)
        puts("**** No reservations for today ****");
}

void viewAllRecords(void) {
    for (int i = 0; i < numberOfPatients; i++) {
        viewRecord(headPatient[i].ID);
    }
}