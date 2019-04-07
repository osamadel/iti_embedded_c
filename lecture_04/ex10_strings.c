#include <stdio.h>

int main(void) {
    char name1[] = {'O', 's', 'a', 'm', 'a', '\0'};
    char name2[] = "OSAMA";
    printf("%s\n", name1);
    printf("%s\n", name2);
    printf("%c\n", name2[5]);
    return 0;
}