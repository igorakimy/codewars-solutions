#include <stdint.h>
#include <stdio.h>

char*
hoop_count(uint32_t n) {
    return n >= 10 ? "Great, now move on to tricks" : "Keep at it until you get it";
}

int
main() {
    printf("%s\n", hoop_count(6));   /* Keep at it until you get it */
    printf("%s\n", hoop_count(22));  /* Great, now move on to tricks */
    printf("%s\n", hoop_count(135)); /* Great, now move on to tricks */
}
