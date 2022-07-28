#include <stdio.h>

int main() {
    int number, workedHours;
    double receivedPerHour, salary;
    scanf("%d%d%lf", &number, &workedHours,&receivedPerHour);
    salary = workedHours * receivedPerHour;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", salary);
    return 0;
}