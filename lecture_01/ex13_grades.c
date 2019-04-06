#include <stdio.h>

int main(void)
{
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade >= 85)
        printf("Your rating is Excellent.\n");
    else if(grade >= 75)
        printf("Your rating is Very Good.\n");
    else if(grade > 65)
        printf("Your rating is Good.\n");
    else if(grade > 50)
        printf("Your rating is Normal.\n");
    else
        printf("Your rating is Failed.\n");
    return 0;
}