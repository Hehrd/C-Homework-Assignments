#include <stdio.h>

#define SWAP(x, y, TYPE) { \
    TYPE temp = x; \
    x = y; \
    y = temp; \
}
#define SORT(ARRAY, SIZE, TYPE, COMPARE) { \
    for (size_t i = 0; i < (SIZE) - 1; i++) { \
        for (size_t j = 0; j < (SIZE) - i - 1; j++) { \
            if ((ARRAY)[j] COMPARE (ARRAY)[j + 1]) { \
                SWAP((ARRAY)[j], (ARRAY)[j + 1], TYPE); \
            } \
        } \
    } \
}

int main() {
    int array[] = {5, 2, 9, 1, 6};
    size_t size = sizeof(array) / sizeof(array[0]);
    SORT(array, size, int, >);
    for (size_t i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
        return 0;
}
