#include <stdio.h>
/* print my name 10 times using int and float counters */
int main(void)
{
    float i;
    for (i=0; i<1; i+=0.1)
        printf("%f: Osama Adel\n", i);
    
    for (int j=0; j<10; j++)
        printf("%d ", j+1);
    return 0;
}