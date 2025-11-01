#include <stdio.h>
#include "rectangle.h"

void printHollowRectangle(int length, int breadth) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < breadth; j++) {
            if (i == 0 || i == length - 1 || j == 0 || j == breadth - 1)
                printf("+");
            else
                printf(" ");
        }
        printf("\n");
    }
}
