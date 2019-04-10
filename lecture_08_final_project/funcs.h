#ifndef FUNCS
#define FUNCS
    #include "types.h"
    int     addPatient              (Patient *);
    int     editPatient             (unsigned int, Patient *);
    void    displayAvailableSlots   (void);
    int     reserveSlot             (unsigned int, Slot time);
    int     cancelReservation       (unsigned int);
    void    viewRecord              (unsigned int);
    void    viewReservations        (void);
    void    welcomeScreen           (void);
    void    adminMode               (void);
    void    promptAdminOptions      (void);
    void    userMode                (void);
#endif