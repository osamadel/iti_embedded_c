#include <stdio.h>

void decToBin(char);
void binToDec(char);

int main(void)
{
    int x = 0;
    printf("Please enter a decimal number to convert to binary: ");
    scanf("%d", &x);
    decToBin(x);
    return 0;
}

void decToBin(char dec)
{
    int bin = 0;
    for (int i=128; i>0; i /= 2)
    {
        if (dec >= i)
            bin = bin * 10 + 1;
        else
            bin = bin * 10;
        dec %= i;
    }
    printf("Binary: %d\n", bin);
}

void binToDec(char bin)
{
    int dec = 0;
    int digit = 0;
    // TODO
    //
    printf("Binary: %d\n", bin);
}