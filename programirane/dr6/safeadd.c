#include <stdio.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    SafeResult num1 = safestrtoint(argv[1]);
    SafeResult num2 = safestrtoint(argv[2]);

    if (num1.error || num2.error) {
        PrintError();
        return 1;
    }

    SafeResult result = safeadd(num1.value, num2.value);
    if (result.error) {
        PrintError();
        return 1;
    }

    printf("Result: %d\n", result.value);
    return 0;
}