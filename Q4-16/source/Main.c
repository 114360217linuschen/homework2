#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "triangle.h"

int main(void) {
    int size = 10;  // 可自行修改層數

    printf("(A)\n");
    printTriangleA(size);

    printf("\n(B)\n");
    printTriangleB(size);

    printf("\n(C)\n");
    printTriangleC(size);

    printf("\n(D)\n");
    printTriangleD(size);

    return 0;
}
