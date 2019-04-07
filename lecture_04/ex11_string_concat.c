#include <stdio.h>

void concat(char * str1, char * str2, char * dest);

int main(void) {
    char str1[] = "hello ";
    char str2[] = "world";
    char full[15];
    concat(str1, str2, full);
    printf("%s\n", full);
    return 0;
}

void concat(char * str1, char * str2, char * dest) {
    int idx = 0;
    for (idx=0; str1[idx] != '\0'; idx++)
        dest[idx] = str1[idx];
    for (int i=0; str2[i] != '\0'; i++)
        dest[i+idx] = str2[i];
}