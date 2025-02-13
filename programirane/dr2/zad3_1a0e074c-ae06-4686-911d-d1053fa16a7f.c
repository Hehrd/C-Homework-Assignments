#include <stdio.h>
#define DEBUG_HELPER(var) printf("path: %s, line: %d, name: %s", __FILE__, __LINE__, #var)

int main() {
    int var = 5;
    DEBUG_HELPER(var);
    return 0;
}
