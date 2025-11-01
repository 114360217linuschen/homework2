#include "commission.h"

double calculateCommission(double sales) {
    const double basePay = 200.0;
    const double commissionRate = 0.09;
    return basePay + commissionRate * sales;
}
