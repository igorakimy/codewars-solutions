#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*
find_needle(const char* const haystack[], size_t count) {
    for (size_t i = 0; i < count; ++i) {
        if (strcmp(haystack[i], "needle") == 0) {
            char* res = malloc(40 * sizeof(char));
            sprintf(res, "%s %zu", "found the needle at position", i);
            if (res != NULL) {
                return res;
            }
        }
    }
    return NULL;
}

/*
char*
find_needle(const char** haystack, size_t count) {
    for (int i = 0; i < count; ++i) {
        if (!strcmp(haystack[i], "needle")) {
            char* buff;
            asprintf(&buff, "found the needle at position %d", i);
            return buff;
        }
    }
    return NULL;
}
*/

int
main() {
    printf("%s\n", find_needle((const char*[]){"hay", "junk", "hay", "hay", "moreJunk", "needle", "randomJunk"}, 7));
    printf("%s\n", find_needle((const char*[]){"3", "123124234", "None", "needle", "world", "hay", "2", "3"}, 8));
    printf("%s\n", find_needle((const char*[]){"283497238987234", "a dog", "a cat", "some random junk",
                                               "a piece of hay", "needle", "something somebody lost a while ago"},
                               7));
    printf("%s\n", find_needle((const char*[]){"1", "2",  "3",   "4",  "5", "6",   "7",   "8",   "8",      "7",  "5",
                                               "4", "3",  "4",   "5",  "6", "67",  "5",   "5",   "3",      "3",  "4",
                                               "2", "34", "234", "23", "4", "234", "324", "324", "needle", "1",  "2",
                                               "3", "4",  "5",   "5",  "6", "5",   "4",   "32",  "3",      "45", "54"},
                               44));
}