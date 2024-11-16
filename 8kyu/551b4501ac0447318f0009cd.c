#include <stdio.h>
#include <stdbool.h>

const char*
boolean_to_string(bool b) {
    return b ? "true" : "false";
}

int
main() {
    printf("%s\n", boolean_to_string(true));
    printf("%s\n", boolean_to_string(false));
}
