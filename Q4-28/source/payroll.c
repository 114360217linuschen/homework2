#include <stdio.h>
#include "payroll.h"

static double calcManager(double weeklySalary) {
    return weeklySalary;
}

static double calcHourly(double hours, double rate) {
    if (hours <= 40.0) return hours * rate;
    return 40.0 * rate + (hours - 40.0) * rate * 1.5;
}

static double calcCommission(double weeklySales) {
    return 250.0 + 0.057 * weeklySales;
}

static double calcPiece(double items, double payPerItem) {
    return items * payPerItem;
}

void processEmployee(int code) {
    double pay = 0.0;

    switch (code) {
    case 1: {
        double weeklySalary;
        printf("Enter manager's weekly salary: ");
        scanf("%lf", &weeklySalary);
        pay = calcManager(weeklySalary);
        break;
    }
    case 2: {
        double hours, rate;
        printf("Enter hours worked: ");
        scanf("%lf", &hours);
        printf("Enter hourly rate: ");
        scanf("%lf", &rate);
        pay = calcHourly(hours, rate);
        break;
    }
    case 3: {
        double sales;
        printf("Enter gross weekly sales: ");
        scanf("%lf", &sales);
        pay = calcCommission(sales);
        break;
    }
    case 4: {
        double items, payPerItem;
        printf("Enter number of items produced: ");
        scanf("%lf", &items);
        printf("Enter pay per item: ");
        scanf("%lf", &payPerItem);
        pay = calcPiece(items, payPerItem);
        break;
    }
    default:
        printf("Unknown code.\n");
        return;
    }

    printf("Weekly pay is $%.2f\n", pay);
}
