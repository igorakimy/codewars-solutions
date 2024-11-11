#include <stdio.h>
#include <stdlib.h>

long
sum_of_min(const int** nums, size_t rows, size_t cols) {
    long sum = 0;
    for (size_t i = 0; i < rows; ++i) {
        long min = nums[i][0];
        for (size_t j = 0; j < cols; ++j) {
            if (nums[i][j] < min) {
                min = nums[i][j];
            }
        }
        sum += min;
    }
    return sum;
}

int**
matrix2d_new(size_t rows, size_t cols) {
    int** arr = malloc(rows * sizeof(int*));
    for (size_t i = 0; i < rows; ++i) {
        arr[i] = malloc(cols * sizeof(int));
    }
    return arr;
}

int
main() {
    int** arr1 = matrix2d_new(4, 5);
    const int a[4][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
    for (size_t i = 0; i < 4; ++i) {
        for (size_t j = 0; j < 5; ++j) {
            arr1[i][j] = a[i][j];
        }
    }

    int** arr2 = matrix2d_new(3, 5);
    const int b[3][5] = {{7, 9, 8, 6, 2}, {6, 3, 5, 4, 3}, {5, 8, 7, 4, 5}};
    for (size_t i = 0; i < 3; ++i) {
        for (size_t j = 0; j < 5; ++j) {
            arr2[i][j] = b[i][j];
        }
    }

    int** arr3 = matrix2d_new(9, 1);
    const int c[9][1] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (size_t i = 0; i < 9; ++i) {
        for (size_t j = 0; j < 1; ++j) {
            arr3[i][j] = c[i][j];
        }
    }

    printf("%ld\n", sum_of_min((const int**)arr1, 4ul, 5ul));
    printf("%ld\n", sum_of_min((const int**)arr2, 3ul, 5ul));
    printf("%ld\n", sum_of_min((const int**)arr3, 9ul, 1ul));

    free(arr1);
    free(arr2);
    free(arr3);
}
