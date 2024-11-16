#include <stdbool.h>
#include <stdio.h>

bool
better_than_average(const int class_points[], int class_size, int your_points) {
    int sum = 0;
    for (int i = 0; i < class_size; ++i) {
        sum += class_points[i];
    }
    return your_points > sum / class_size;
}

/*
int
better_than_average(const int cls_pts[], int cls_len, const int pts) {
    int res = 0;
    while (cls_len--) {
        res += pts - cls_pts[cls_len];
    }
    return res >= 0;
}
*/

int
main() {
    printf("%i\n", better_than_average((const int[]){2, 3}, 2, 5));
    printf("%i\n", better_than_average((const int[]){100, 40, 34, 57, 29, 72, 57, 88}, 8, 75));
    printf("%i\n", better_than_average((const int[]){12, 23, 34, 45, 56, 67, 78, 89, 90}, 9, 69));
    printf("%i\n", better_than_average((const int[]){12, 23, 34, 45, 56, 67, 78, 89, 90}, 9, 9));
}