#include <stdio.h>

int
area_or_perimeter(int l, int w) {
    return l == w ? l * w : l * 2 + w * 2;
}

int
main() {
    printf("%d\n", area_or_perimeter(3, 3));  /* 9 */
    printf("%d\n", area_or_perimeter(6, 10)); /* 32 */
}