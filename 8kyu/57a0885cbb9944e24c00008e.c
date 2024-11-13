#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
remove_exclamation_marks(const char* str_in, char* str_out) {
    size_t j = 0;
    for (size_t i = 0; i < strlen(str_in); ++i) {
        if (str_in[i] != '!') {
            str_out[j++] = str_in[i];
        }
    }
    str_out[j] = '\0';
}

/*
void
remove_exclamation_marks(const char* str_in, char* str_out) {
    do {
        if (*str_in != '!') {
            *str_out++ = *str_in;
        }
    } while (*str_in++);
}
*/

int
main() {
    char* strings[] = {"Hello World!", "Hello World!!!", "Hi! Hello!", "!Hi Hello!", "", "Oh, no!!!"};
    size_t len = sizeof(strings) / sizeof(*strings);

    char** results = malloc(sizeof(char*) * len);
    for (size_t i = 0; i < len; ++i) {
        results[i] = memset(malloc(sizeof(char)), '@', strlen(strings[i]));
    }

    for (size_t i = 0; i < len; ++i) {
        remove_exclamation_marks(strings[i], results[i]);
        printf("%s\n", results[i]);
    }

    free(results);
}