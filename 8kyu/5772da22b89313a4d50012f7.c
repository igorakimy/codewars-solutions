#include <stdio.h>
#include <string.h>

const char*
greet(const char* name, const char* owner) {
    return !strcmp(name, owner) ? "Hello boss" : "Hello guest";
}

int
main() {
    printf("%s\n", greet("Daniel", "Daniel"));
    printf("%s\n", greet("Greg", "Daniel"));
    static const char danielToo[] = "Daniel";
    printf("%s\n", greet(danielToo, "Daniel"));
    printf("%s\n", greet("Cat", "Catherine"));
    printf("%s\n", greet("Catherine", "Cat"));
}
