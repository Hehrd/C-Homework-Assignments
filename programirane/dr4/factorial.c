#include "maths.h"

int factorial(int n) {
    if (n <= 0) {
        return 0;
    }
    int result = 1;
    for (;  n > 1; n--) {
        result *= n;
    }
    return result;
}
