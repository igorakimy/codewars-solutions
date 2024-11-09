#include <stdbool.h>
#include <stdio.h>

bool
zero_fuel(double distance_to_pump, double mpg, double fuel_left) {
    return mpg * fuel_left >= distance_to_pump;
}

int
main() {
    printf("%i\n", zero_fuel(50, 25, 2));  /* 1 */
    printf("%i\n", zero_fuel(60, 30, 3));  /* 1 */
    printf("%i\n", zero_fuel(70, 25, 1));  /* 0 */
    printf("%i\n", zero_fuel(100, 25, 3)); /* 0 */

    return 0;
}
