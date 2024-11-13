#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool
is_even(double n) {
    return (long int)n == n && (long int)n % 2 == 0;
}

/*
bool
is_even(double n) {
    return !fmod(n, 2);
}
*/

int
main() {
    printf("%i\n", is_even(0));
    printf("%i\n", is_even(0.5));
    printf("%i\n", is_even(1));
    printf("%i\n", is_even(2));
    printf("%i\n", is_even(-4));
}