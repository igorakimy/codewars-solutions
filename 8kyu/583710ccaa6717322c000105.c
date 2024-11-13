#include <stdio.h>

int
simple_multiplication(int number) {
    return number % 2 ? number * 9 : number * 8;
}

/*
int simple_multiplication(int number) {
    return number * (number % 2 ? 9 : 8);
}
*/

int
main() {
    printf("%d\n", simple_multiplication(2));
    printf("%d\n", simple_multiplication(1));
    printf("%d\n", simple_multiplication(8));
    printf("%d\n", simple_multiplication(4));
    printf("%d\n", simple_multiplication(5));
}
