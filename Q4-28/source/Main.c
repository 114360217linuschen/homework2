#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "payroll.h"

int main(void) {
    int code;

    while (1) {
        printf("Enter pay code (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker, -1 to end): ");
        if (scanf("%d", &code) != 1) return 0;
        if (code == -1) break;

        if (code < 1 || code > 4) {
            printf("Invalid code. Please enter 1, 2, 3, 4, or -1 to end.\n\n");
            continue;
        }

        processEmployee(code);
        printf("\n");
    }

    return 0;
}
