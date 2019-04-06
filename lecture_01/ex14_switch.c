#include <stdio.h>

int main(void)
{
    int id;
    printf("Please enter your ID:");
    scanf("%d", &id);
    switch (id)
    {
        case 1234:
            printf("Ahmed\n");
            break;
        case 5678:
            printf("Youssef\n");
            break;
        case 1145:
            printf("Mina\n");
            break;
        default:
            printf("Not Found\n");
    }
    return 0;
}