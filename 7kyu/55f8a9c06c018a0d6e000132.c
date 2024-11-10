#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool
validate_pin(const char* pin) {
    int str_len = strlen(pin);
    if (str_len != 4 && str_len != 6) {
        return false;
    }
    for (int i = 0; i < str_len; ++i) {
        if (pin[i] > '9' || pin[i] < '0') {
            return false;
        }
    }
    return true;
}

/*
bool
validate_pin(const char* pin) {
    int n = 0;
    sscanf(pin, "%*6[0-9]%n", &n);
    return (n == 4 || n == 6) && pin[n] == '\0';
}
*/

int
main() {
    printf("%i\n", validate_pin("1"));
    printf("%i\n", validate_pin("12"));
    printf("%i\n", validate_pin("123"));
    printf("%i\n", validate_pin("12345"));
    printf("%i\n", validate_pin("1234567"));
    printf("%i\n", validate_pin("-1234"));
    printf("%i\n", validate_pin("=12345"));
    printf("%i\n", validate_pin("1.234"));
    printf("%i\n", validate_pin("00000000"));

    printf("%i\n", validate_pin("a234"));
    printf("%i\n", validate_pin(".234"));

    printf("%i\n", validate_pin("1234"));
    printf("%i\n", validate_pin("0000"));
    printf("%i\n", validate_pin("1111"));
    printf("%i\n", validate_pin("123456"));
    printf("%i\n", validate_pin("098765"));
    printf("%i\n", validate_pin("000000"));
    printf("%i\n", validate_pin("090909"));
}
