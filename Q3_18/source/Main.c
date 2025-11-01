#include <stdio.h>
#include "commission.h"

int main(void) {
    double sales;

    while (1) {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf", &sales);

        if (sales == -1)
            break;

        double salary = calculateCommission(sales);
        printf("Salary is: $%.2f\n\n", salary);
    }

    return 0;
}
