#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "salary.h"

int main(void) {
    double hours, rate;

    while (1) {
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%lf", &hours);

        if (hours == -1)
            break;

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &rate);

        double salary = calculateSalary(hours, rate);
        printf("Salary is $%.2f\n\n", salary);
    }

    return 0;
}
