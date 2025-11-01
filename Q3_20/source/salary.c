#include "salary.h"

double calculateSalary(double hours, double rate) {
    double salary;

    if (hours <= 40.0)
        salary = hours * rate;
    else
        salary = 40.0 * rate + (hours - 40.0) * rate * 1.5;

    return salary;
}
