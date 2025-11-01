#include <stdio.h>
#include "credit.h"

void checkCredit(int account, double beginningBalance, double totalCharges, double totalCredits, double creditLimit) {
    double newBalance = beginningBalance + totalCharges - totalCredits;

    printf("Account: %d\n", account);
    printf("Credit limit: %.2f\n", creditLimit);
    printf("Balance: %.2f\n", newBalance);

    if (newBalance > creditLimit) {
        printf("Credit limit exceeded.\n");
    }
}
