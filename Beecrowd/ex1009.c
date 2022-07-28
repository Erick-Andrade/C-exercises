#include <stdio.h>

int main(){

    char name[50];
    double fixedSalary, sale, salary;
    scanf("%s%lf%lf", &name, &fixedSalary, &sale);
    salary = fixedSalary + (sale * 0.15);
    printf("TOTAL = R$ %.2lf\n", salary);
    return 0;
}