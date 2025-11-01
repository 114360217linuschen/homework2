#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "interest.h"

int main(void) {
    double principal, rate;
    int days;

    while (1) {
        printf("Enter loan principal (-1 to end): ");
        scanf("%lf", &principal);

        if (principal == -1)
            break;

        printf("Enter interest rate: ");
        scanf("%lf", &rate);

        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        double interest = calculateInterest(principal, rate, days);
        printf("The interest charge is $%.2f\n\n", interest);
    }

    return 0;
}
