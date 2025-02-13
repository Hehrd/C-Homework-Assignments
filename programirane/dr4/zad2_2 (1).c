#include <stdio.h>

int getLeastCommonMultiple(int a, int b) {
    int max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}


int main() {
    int a = 12, b = 10;
    int lcm = getLeastCommonMultiple(a, b);
    printf("%d", lcm);
    return 0;
}

