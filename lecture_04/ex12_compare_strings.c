#include <stdio.h>

char strCompare(char * str1, char * str2);

int main(void) {
    char str1[15];
    char str2[15];
    printf("Please enter two names to compare. separated by a space: ");
    scanf("%s %s", str1, str2);
    printf("comparing %s and %s: %s\n", str1, str2, strCompare(str1, str2)?"true":"false");
    return 0;
}

char strCompare(char * str1, char * str2) {
    for (int i=0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] == '\0' && str2[i] == '\0') return 0;
        if (str1[i] != str2[i]) return 0;
    }
    return 1;
}