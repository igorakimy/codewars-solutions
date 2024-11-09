#include <assert.h>
#include <stdio.h>
#include <string.h>

char*
maskify(char* masked, const char* string) {
    size_t str_len = strlen(string);

    for (size_t i = 0, pos = str_len; i < str_len; ++i, --pos) {
        masked[i] = pos <= 4 ? string[i] : '#';
    }

    masked[str_len] = '\0';

    return masked;
}

/*
char*
maskify(char* masked, const char* string) {
    int n = strlen(strcpy(masked, string)) - 4;
    if (n > 0) {
        memset(masked, '#', n);
    }
    return masked;
}
*/

int
main() {
    printf("%s\n", maskify((char[]){}, "4556364607935616")); /* ############5616 */
    printf("%s\n", maskify((char[]){}, "64607935616"));      /* #######5616 */
    printf("%s\n", maskify((char[]){}, "12345"));            /* #2345 */
    printf("%s\n", maskify((char[]){}, "1234"));             /* 1234 */
    printf("%s\n", maskify((char[]){}, "123"));              /* 123 */
    printf("%s\n", maskify((char[]){}, "12"));               /* 12 */
    printf("%s\n", maskify((char[]){}, "1"));                /* 1 */
    printf("%s\n", maskify((char[]){}, ""));                 /* */
    printf("%s\n", maskify((char[]){}, "Skippy"));           /* ##ippy */
    printf("%s\n", maskify((char[]){},
                           "Nananananananananananananananana Batman!")); /* ####################################man! */
}
