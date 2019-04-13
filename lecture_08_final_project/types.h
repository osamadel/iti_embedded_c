#ifndef TYPES
#define TYPES
    typedef enum {PM2=1, PM230, PM3, PM4, PM430} Slot;

    struct Patient {
        unsigned int    ID;
        char            name[20];
        unsigned int    age;
        char            gender;
    };

    // struct TimeSlot
    // {
    //     unsigned int ID;
    // };
#endif