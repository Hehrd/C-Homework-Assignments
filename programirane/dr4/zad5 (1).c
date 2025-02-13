#include <stdio.h>
#include "maths.h"

int main() {
    int number;
    scanf("%d", &number);
    int result = factorial(number);
    if (number < 0) {
        printf("Факториел не може да бъде изчислен за отрицателни числа.\n");
    } else {
        printf("Факториел на %d е %d\n", number, result);
    }

    return 0;
}

