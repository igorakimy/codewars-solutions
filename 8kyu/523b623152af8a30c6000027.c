#include <stdio.h>
#include <stdint.h>

int32_t
square(int32_t num) {
    return num * num;
}

int
main() {
    printf("%d\n", square(1));
    printf("%d\n", square(2));
    printf("%d\n", square(3));
    printf("%d\n", square(4));
    printf("%d\n", square(5));
}
