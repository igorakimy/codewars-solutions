#include <stdio.h>

double
find_average(const double array[], unsigned length) {
    double sum = 0;

    if (length == 0) {
        return 0;
    }

    for (unsigned i = 0; i < length; ++i) {
        sum += array[i];
    }

    return sum / length;
}

int
main() {
    printf("%f\n", find_average((double[]){0, 0, 0, 0}, 4));                                         /* 0.000000 */
    printf("%f\n", find_average((double[]){17, 16, 16, 16, 16, 15, 17, 17, 15, 5, 17, 17, 16}, 13)); /* 15.384615 */
    printf("%f\n", find_average((double[]){1, 2, 3}, 3));                                            /* 2.000000 */
}
