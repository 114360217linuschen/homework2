#include <stdio.h>
#include "credit.h"   // 引入副程式的標頭檔

int main(void) {
    int account;
    double beginningBalance, totalCharges, totalCredits, creditLimit;

    while (1) {
        printf("Enter account number (-1 to end): ");
        scanf("%d", &account);

        if (account == -1)
            break;

        printf("Enter beginning balance: ");
        scanf("%lf", &beginningBalance);

        printf("Enter total charges: ");
        scanf("%lf", &totalCharges);

        printf("Enter total credits: ");
        scanf("%lf", &totalCredits);

        printf("Enter credit limit: ");
        scanf("%lf", &creditLimit);

        // 呼叫副程式進行計算與顯示
        checkCredit(account, beginningBalance, totalCharges, totalCredits, creditLimit);
        printf("\n");
    }

    return 0;
}
