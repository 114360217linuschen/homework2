#include <stdio.h>
#include "triangle.h"

void printTriangleA(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

void printTriangleB(int size) {
    for (int i = size; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

void printTriangleC(int size) {
    for (int i = size; i >= 1; i--) {
        for (int space = 1; space <= size - i; space++)
            printf(" ");
        for (int star = 1; star <= i; star++)
            printf("*");
        printf("\n");
    }
}

void printTriangleD(int size) {
    for (int i = 1; i <= size; i++) {
        for (int space = 1; space <= size - i; space++)
            printf(" ");
        for (int star = 1; star <= i; star++)
            printf("*");
        printf("\n");
    }
}
