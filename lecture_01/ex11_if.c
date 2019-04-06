#include <stdio.h>

int main(void)
{
    int hour_rate = 50;
    int salary;
    int working_hours;

    printf("Enter your working hours: ");
    scanf("%d", &working_hours);
    salary = hour_rate * working_hours;
    if (working_hours < 40)
        salary *= 0.9;

    printf("Your salary is: %d\n", salary);

    return 0;
}