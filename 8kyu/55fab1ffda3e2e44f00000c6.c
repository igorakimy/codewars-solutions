#include <stdio.h>

int
cockroach_speed(double s) {
    return (int)(s * 100000 / 3600);
}

/*
int
cockroach_speed(double s) {
    return s / 0.036;
}
*/

int
main() {
    printf("%d\n", cockroach_speed(1.08));
    printf("%d\n", cockroach_speed(1.09));
    printf("%d\n", cockroach_speed(0));
}
