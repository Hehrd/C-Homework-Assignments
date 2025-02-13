#include <stdio.h>
#define SWAP(A, B, TYPE) {   \
    TYPE temp = A;   \
    A = B;           \
    B = temp;        \
}
int main() {
    int a = 5;
    int b = 2;
    
    SWAP(a, b, int);
    printf("%d", b);
    return 0;
}
