#include <stdio.h>
#include "pythagorean.h"

void findPythagoreanTriples(int limit) {
    for (int side1 = 1; side1 <= limit; side1++) {
        for (int side2 = side1; side2 <= limit; side2++) {
            for (int hypotenuse = side2; hypotenuse <= limit; hypotenuse++) {
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    printf("%d\t%d\t%d\n", side1, side2, hypotenuse);
                }
            }
        }
    }
}
