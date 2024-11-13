#include <stdio.h>

int
get_average(const int* marks, size_t count) {
    int sum = 0;
    for (size_t i = 0; i < count; ++i) {
        sum += marks[i];
    }
    return (int)(sum / count);
}

int
main() {
    printf("%d\n", get_average((int[]){2, 2, 2, 2}, 4));
    printf("%d\n", get_average((int[]){1, 5, 87, 45, 8, 8}, 6));
    printf("%d\n", get_average((int[]){2, 5, 13, 20, 16, 16, 10}, 7));
    printf("%d\n", get_average((int[]){1, 2, 15, 15, 17, 11, 12, 17, 17, 14, 13, 15, 6, 11, 8, 7}, 16));
}
