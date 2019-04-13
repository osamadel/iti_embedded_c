#ifndef FUNCS
#define FUNCS
    #include "types.h"
    int     addPatient              (unsigned int, char *, unsigned int, char);
    int     editPatient             (unsigned int, char *, unsigned int, char);
    void    displayAvailableSlots   (void);
    int     reserveSlot             (unsigned int, unsigned int time);
    int     cancelReservation       (unsigned int);
    void    viewRecord              (unsigned int);
    void    viewAllRecords          (void);
    void    viewReservations        (void);
    void    welcomeScreen           (void);
    void    adminMode               (void);
    void    promptAdminOptions      (void);
    void    userMode                (void);
#endif