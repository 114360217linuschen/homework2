#include <stdio.h>
#include "diamond.h"

void printDiamond(int height) {
    int mid = height / 2 + 1;

    for (int i = 1; i <= mid; i++) {
        for (int space = 1; space <= mid - i; space++)
            printf(" ");
        for (int star = 1; star <= 2 * i - 1; star++)
            printf("*");
        printf("\n");
    }

    for (int i = mid - 1; i >= 1; i--) {
        for (int space = 1; space <= mid - i; space++)
            printf(" ");
        for (int star = 1; star <= 2 * i - 1; star++)
            printf("*");
        printf("\n");
    }
}
