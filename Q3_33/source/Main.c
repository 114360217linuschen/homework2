#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "rectangle.h"

int main(void) {
    int length, breadth;

    printf("Enter rectangle length: ");
    scanf("%d", &length);

    printf("Enter rectangle breadth: ");
    scanf("%d", &breadth);

    printHollowRectangle(length, breadth);

    return 0;
}
