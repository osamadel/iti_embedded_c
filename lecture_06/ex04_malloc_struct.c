#include <stdio.h>
#include <stdlib.h>
#include "stdtypes.h"

struct Student
{
    uint_8 id;
    uint_8 age;
    uint_8 name[20];
};

int main(void) {
    uint_8 studentNum = 0;
    
    printf("Enter the number of students: ");
    scanf("%d", &studentNum);
    
    struct Student * ptr;
    ptr = (struct Student *) malloc(studentNum * sizeof(struct Student));
    
    for (int i = 0; i < studentNum; i++) {
        printf("Enter student# %d id: ", i+1);
        scanf("%d", &ptr[i].id);
        printf("Enter student# %d age: ", i+1);
        scanf("%d", &ptr[i].age);
        printf("Enter student# %d name: ", i+1);
        scanf("%s", ptr[i].name);
        puts("");
    }

    puts("STUDENTS==============");
    for (int i = 0; i < studentNum; i++) {
        printf("STUDENT %d\n", i+1);
        printf("NAME:\t\t%s\n", ptr[i].name);
        printf("ID:\t\t%d\n", ptr[i].id);
        printf("AGE:\t\t%d\n", ptr[i].age);
        puts("======================");
    }

    return 0;
}