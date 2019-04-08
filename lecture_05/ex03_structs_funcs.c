#include <stdio.h>
#include "stdtypes.h"

struct Employee createEmployee(uint_16 id, uint_16 salary);
void increaseSalary(struct Employee *, uint_16);

struct Employee
{
    uint_16 id;
    uint_16 salary;
};

int main(void) {
    uint_16 inc = 500;
    struct Employee emp1 = createEmployee(100, 3000);
    struct Employee emp2 = createEmployee(200, 5000);
    printf("Employee 1:\nID: \t%d\nSalary: %d EGP\n", emp1.id, emp1.salary);
    printf("Employee 2:\nID: \t%d\nSalary: %d EGP\n", emp2.id, emp2.salary);
    printf("=================\n\n");
    printf("After increasing Employee 1 by %d EGP:\n", inc);
    increaseSalary(&emp1, inc);
    printf("Employee 1:\nID: \t%d\nSalary: %d EGP\n", emp1.id, emp1.salary);
    return 0;
}

struct Employee createEmployee(uint_16 id, uint_16 salary) {
    struct Employee emp;
    emp.id = id;
    emp.salary = salary;
    return emp;
}

void increaseSalary(struct Employee * emp, uint_16 s) {
    emp->salary += s;
}