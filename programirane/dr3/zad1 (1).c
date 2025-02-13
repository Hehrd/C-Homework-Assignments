#include <stdio.h>

#define DEBUG

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int sum = 0;
    for (int i = 3; i < size; i += 3) {
        sum += arr[i];
    }
    printf("%d\n", sum);

#ifdef DEBUG
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
#endif
}

int main() {
    int arr[] = {5, 3, 8, 1, 9, 6, 2, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    return 0;
}


