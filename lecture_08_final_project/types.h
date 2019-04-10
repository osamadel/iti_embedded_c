#ifndef TYPES
#define TYPES
    typedef enum {PM2, PM230, PM3, PM4, PM430} Slot;

    typedef struct _{
        unsigned int    ID;
        char            name[20];
        unsigned int    age;
        char            gender;
    } Patient;

    typedef struct
    {
        unsigned int ID;
        Slot time;
    } TimeSlot;
#endif