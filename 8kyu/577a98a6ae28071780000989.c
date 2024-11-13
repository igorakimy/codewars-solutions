#include <stdio.h>

int
min(const int* array, int arrayLength) {
    int min = *array;
    for (size_t i = 0; i < arrayLength; ++i) {
        min = array[i] < min ? array[i] : min;
    }
    return min;
}

int
max(const int* array, int arrayLength) {
    int max = *array;
    for (size_t i = 0; i < arrayLength; ++i) {
        max = array[i] > max ? array[i] : max;
    }
    return max;
}

int
main() {
    printf("%d\n", min((int[]){-52, 56, 30, 29, -54, 0, -110}, 7));
    printf("%d\n", min((int[]){42, 54, 65, 87, 0}, 5));
    printf("%d\n", max((int[]){4,6,2,1,9,63,-134,566}, 8));
    printf("%d\n", max((int[]){5}, 1));
}
