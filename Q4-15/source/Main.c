#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "compound.h"

int main(void) {
    double principal = 5000.0;
    int years = 15;

    printf("Compound Interest for an initial investment of $%.2f for %d years:\n\n", principal, years);

    for (double rate = 0.10; rate <= 0.12; rate += 0.005) {
        printf("Interest rate: %.1f%%\n", rate * 100);
        printCompoundTable(principal, rate, years);
        printf("\n");
    }

    return 0;
}
