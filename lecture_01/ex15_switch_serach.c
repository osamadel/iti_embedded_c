#include <stdio.h>

int main(void)
{
    int id, password;
    // id = 1234;
    // password = 4511;
    printf("Please enter your ID: ");
    scanf("%d", &id);
    if (id == 1234)
    {
        printf("Please enter your password: ");
        scanf("%d", &password);
        if (password == 4511)
            printf("Your user name is Do2do2!\n");
        else
            printf("Incorrect Password!\n");
    }else
        printf("Incorrect ID!\n");
    return 0;
}