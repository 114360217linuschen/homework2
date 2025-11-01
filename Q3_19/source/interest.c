#include "interest.h"

double calculateInterest(double principal, double rate, int days) {
    return principal * rate * days / 365.0;
}
