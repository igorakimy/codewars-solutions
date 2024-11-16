#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*
smash(const char* const words[], size_t count) {
    char* sentence = (char*)calloc(50, 1);
    for (size_t i = 0; i < count; ++i) {
        strcat(sentence, words[i]);
        if (i != count - 1) {
            strcat(sentence, " ");
        }
    }
    return sentence;
}

int
main() {
    printf("%s\n", smash((const char* []){"a", "b", "c", "d"}, 4));
    printf("%s\n", smash((const char* []){"hello", "world"}, 2));
    printf("%s\n", smash((const char* []){"singleword"}, 1));
}