#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*
double_char(const char* string, char* doubled) {
    size_t i;
    for (i = 0; i < strlen(string); ++i) {
        doubled[i * 2] = string[i];
        doubled[i * 2 + 1] = string[i];
    }
    doubled[i * 2] = '\0';
    return doubled;
}

/*
char*
double_char(const char* string, char* doubled) {
    char *s = string, *d = doubled;
    while (*s) {
        *d++ = *s;
        *d++ = *s++;
    }
    *d = '\0';
    return doubled;
}
*/

char*
user_string(int str_len) {
    const size_t size = 2 * str_len + 1;
    char* str = memset(malloc(size), '@', size);
    return str;
}

int
main() {
    printf("%s\n", double_char("", user_string(0)));
    printf("%s\n", double_char("a", user_string(1)));
    printf("%s\n", double_char("abcd", user_string(4)));
    printf("%s\n", double_char("Adidas", user_string(6)));
    printf("%s\n", double_char("1337", user_string(4)));
    printf("%s\n", double_char("illuminati", user_string(10)));
    printf("%s\n", double_char("123456", user_string(6)));
    printf("%s\n", double_char("%^&*(", user_string(5)));
}
