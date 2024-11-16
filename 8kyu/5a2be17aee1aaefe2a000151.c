#include <limits.h>
#include <stdio.h>

long
arr_plus_arr(const int* a, const int* b, size_t na, size_t nb) {
    long sum = 0;
    for (size_t i = 0; i < na; ++i) {
        sum += a[i];
    }
    for (size_t i = 0; i < nb; ++i) {
        sum += b[i];
    }
    return sum;
}

/*
long
arr_plus_arr(const int* a, const int* b, size_t na, size_t nb) {
    long t = 0;
    while (na--) {
        t += *a++;
    }
    while (nb--) {
        t += *b++;
    }
    return t;
}
*/

int
main() {
    printf("%ld\n", arr_plus_arr((const int[]){1, 2, 3}, (const int[]){4, 5, 6}, 3ul, 3ul));
    printf("%ld\n", arr_plus_arr((const int[]){1, -2, -3}, (const int[]){4, -5, 6}, 3ul, 3ul));
    printf("%ld\n", arr_plus_arr((const int[]){-1, -2, -3}, (const int[]){-4, -5, -6}, 3ul, 3ul));
    printf("%ld\n", arr_plus_arr((const int[]){0, 0, 0}, (const int[]){4, 5, 6}, 3ul, 3ul));
    printf("%ld\n", arr_plus_arr((const int[]){-1}, (const int[]){-1}, 1ul, 1ul));
    printf("%ld\n", arr_plus_arr((const int[]){0}, (const int[]){0, 0, 0}, 1ul, 2ul));
    printf("%ld\n", arr_plus_arr((const int[]){INT_MAX, INT_MAX, INT_MAX, INT_MIN, INT_MAX},
                                 (const int[]){INT_MIN, INT_MAX, INT_MIN}, 5ul, 3ul));
}