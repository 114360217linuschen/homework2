#include <stdio.h>
#include <math.h>
#include "compound.h"

void printCompoundTable(double principal, double rate, int years) {
    printf("%4s%20s\n", "Year", "Amount on deposit");

    for (int year = 1; year <= years; year++) {
        double amount = principal * pow(1.0 + rate, year);
        printf("%4d%20.2f\n", year, amount);
    }
}
