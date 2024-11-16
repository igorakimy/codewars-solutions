#include <stdio.h>
#include <stdlib.h>

char*
are_you_playing_banjo(const char* name) {
    char* msg = malloc(50 * sizeof(char));
    char* text = name[0] == 'R' || name[0] == 'r' ? "plays banjo" : "does not play banjo";
    sprintf(msg, "%s %s", name, text);
    return msg;
}

int
main() {
    printf("%s\n", are_you_playing_banjo("Martin"));
    printf("%s\n", are_you_playing_banjo("Rikke"));
    printf("%s\n", are_you_playing_banjo("bravo"));
    printf("%s\n", are_you_playing_banjo("rolf"));
}