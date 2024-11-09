#include <stdio.h>

int
basic_op(char op, int value1, int value2) {
    switch (op) {
        case '+': return value1 + value2;
        case '-': return value1 - value2;
        case '*': return value1 * value2;
        case '/': return value1 / value2;
        default: return 0;
    }
}

int
main() {
    printf("%d\n", basic_op('+', 4, 7));   /* 11 */
    printf("%d\n", basic_op('-', 15, 18)); /* -3 */
    printf("%d\n", basic_op('*', 5, 5));   /* 25 */
    printf("%d\n", basic_op('/', 49, 7));  /* 7 */

    return 0;
}
