#include <stdio.h>
/** ask the user to answer a an arithmetic question
    and repeat the question unless the user answers correctly **/
int main(void)
{
    int x = 0;
    printf("Enter the answer of 3 x 4: ");
    scanf("%d", &x);

    while(x != 3*4)
    {
        printf("Not Correct. Please try again: ");
        scanf("%d", &x);
    }
    printf("Thank You.\n");
    return 0;
}