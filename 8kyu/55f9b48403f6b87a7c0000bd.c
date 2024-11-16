#include <stdio.h>

int
paperwork(int n, int m) {
    return n > 0 && m > 0 ? n * m : 0;
}

int
main() {
    printf("%d\n", paperwork(5, 5)); /* 25 */
    printf("%d\n", paperwork(-5, 5)); /* 0 */
    printf("%d\n", paperwork(5, -5)); /* 0 */
    printf("%d\n", paperwork(-5, -5)); /* 0 */
    printf("%d\n", paperwork(5, 0)); /* 0 */
}
