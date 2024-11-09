#include <stddef.h>
#include <stdio.h>

int
sum_array(const int* values, size_t count) {
    int sum = 0;

    for (size_t i = 0; i < count; ++i) {
        sum += values[i];
    }

    return sum;
}

int
main() {
    printf("%d\n", sum_array((int[]){0}, 1));                   /* 0 */
    printf("%d\n", sum_array(NULL, 0));                         /* 0 */
    printf("%d\n", sum_array((int[]){100, 200, 300, -600}, 4)); /* 0 */
    printf("%d\n", sum_array((int[]){1, 2, 3}, 3));             /* 6 */
    printf("%d\n", sum_array((int[]){3, 2, 1, 1}, 4));          /* 7 */
    printf("%d\n", sum_array((int[]){4, 5, 6}, 3));             /* 15 */
}
