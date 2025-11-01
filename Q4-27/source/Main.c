#include <stdio.h>
#include "pythagorean.h"

int main(void) {
    int limit = 500;
    printf("Pythagorean triples for sides up to %d:\n", limit);
    findPythagoreanTriples(limit);
    return 0;
}
