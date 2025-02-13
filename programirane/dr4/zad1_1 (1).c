#include <stdio.h>

#define SQUARE(A, B) ((A + B) * (A + B))

int main() {
    int a = 5, b = 4;
    int result = SQUARE(a, b);
    printf("Резултатът от (%d + %d)^2 е: %d\n", a, b, result);
    return 0;
}


