#include <stdio.h>
#include <math.h>

void func(long array[], int length) {

    for (int i = 0; i < length; i++) {
        array[i] = pow(array[i], 4);
        printf("%d\n", array[i]);
    }
}

int main() {
    long array[] = {1, 2, 3, 4, 5};
    func(array, sizeof(array) / sizeof(array[0]));
    return 0;
}



