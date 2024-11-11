#include <stdbool.h>
#include <stdio.h>

bool
small_enough(int* arr, size_t length, int limit) {
    for (size_t i = 0; i < length; ++i) {
        if (arr[i] > limit) {
            return false;
        }
    }
    return true;
}

/*
bool
small_enough(int* arr, size_t n, int limit) {
    while (n--) {
        if (*arr++ > limit) {
            return false;
        }
    }
    return true;
}
*/

int
main() {
    printf("%i\n", small_enough((int[]){66, 101}, 2, 200));
    printf("%i\n", small_enough((int[]){78, 117, 110, 99, 104, 117, 107, 115}, 8, 100));
    printf("%i\n", small_enough((int[]){101, 45, 75, 105, 99, 107}, 6, 107));
    printf("%i\n", small_enough((int[]){80, 117, 115, 104, 45, 85, 112, 115}, 8, 120));
}
