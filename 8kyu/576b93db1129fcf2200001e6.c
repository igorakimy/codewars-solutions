#include <stdio.h>

int
sum(const int numbers[], int length) {
    if (length < 2 || numbers == NULL) {
        return 0;
    }
    int sum = 0, min = numbers[0], max = numbers[0];
    for (size_t i = 0; i < length; ++i) {
        min = numbers[i] < min ? numbers[i] : min;
        max = numbers[i] > max ? numbers[i] : max;
        sum += numbers[i];
    }
    return sum - min - max;
}

int
main() {
    printf("%d\n", sum((int[]){6, 2, 1, 8, 10}, 5));
    printf("%d\n", sum((int[]){6}, 1));
    printf("%d\n", sum((int[]){6, 7}, 2));
    printf("%d\n", sum((int[]){6, 0, 1, 10, 10}, 5));
    printf("%d\n", sum((int[]){-6, -20, -1, -10, -12}, 5));
    printf("%d\n", sum((int[]){-6, 20, -1, 10, -12}, 5));
}