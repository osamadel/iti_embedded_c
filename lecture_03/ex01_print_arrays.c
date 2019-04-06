/* receive 10 characters from user and display them in reverse */
#include <stdio.h>

/* **** functions prototypes **** */
void printArr(char *);
void printRevArr(char *);
/* ****************************** */

/* *** main function **** */
int main(void)
{
    char arr[10];
    for (int i=0; i<10; i++)
    {
        printf("Please enter element #%d: ", i);
        arr[i] = getchar();
        /* pressing enter counts as an additional character hence, should be removed */
        getchar();
    }
    printRevArr(arr);
    return 0;
}
/* **** end of main function **** */

/* **** print an array of characters **** */
void printArr(char *arr)
{
    
    for (int i=0; i<10; i++)
        printf("%c ", arr[i]);
}
/* ************************************** */

/* **** print an array of characters in reverse order **** */
void printRevArr(char * arr)
{
    for (int i=9; i>=0; i--)
        printf("%c ", arr[i]);
}
/* ******************************************************* */