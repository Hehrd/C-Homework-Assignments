#include <stdio.h>
#define COMPARE_NUMS(n1, n2) (n1) > (n2) ? (n1) : (n2)

int main() {
    int n1 = 1;
    int n2 = 2;
    printf("%d", COMPARE_NUMS(n1, n2));
    return 0;
}
