#include <stdio.h>
/*  Login System.
    The user enters his/her ID. The ID gets checked, if it's valid, user enters password.
    If the password is wrong, the user has 3 more attempts before the program ends.
    If the password is correct, the user is welcomed to the system.
    If the ID is not valid, the user will be notified that he is not registered.  */
int main(void)
{
    int id = 0, password = 0, t = 0;
    printf("Please enter your ID: ");
    scanf("%d", &id);
    switch (id)
    {
        case 1234:
            printf("Please enter your password: ");
            scanf("%d", &password);
            for (t=0; t<3 && password != 7788; t++)
            {
                printf("Try again: ");
                scanf("%d", &password);
            }
            if (t == 3)
                printf("Incorrect password for 3 times. No more tries\n");
            else
                printf("Welcome Ahmed\n");
            break;
        case 5678:
            printf("Please enter your password: ");
            scanf("%d", &password);
            for (t=0; t<3 && password != 5566; t++)
            {
                printf("Try again: ");
                scanf("%d", &password);
            }
            if (t == 3)
                printf("Incorrect password for 3 times. No more tries\n");
            else
                printf("Welcome Amr\n");
            break;
        case 9870:
            printf("Please enter your password: ");
            scanf("%d", &password);
            for (t=0; t<3 && password != 1122; t++)
            {
                printf("Try again: ");
                scanf("%d", &password);
            }
            if (t == 3)
                printf("Incorrect password for 3 times. No more tries\n");
            else
                printf("Welcome Wael\n");
            break;
        default:
            printf("Your are not registered.\n");
        
    }
    return 0;
}