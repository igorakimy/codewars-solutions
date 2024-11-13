#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long long
square_digits(unsigned n) {
    char src[8];
    char dst[64] = "";
    sprintf(src, "%u", n);
    for (size_t i = 0; i < strlen(src); ++i) {
        int s = src[i] - '0';
        char m[8];
        sprintf(m, "%u", s * s);
        strcat(dst, m);
    }
    return strtoull(dst, NULL, 10);
}

/*
unsigned long long
square_digits(unsigned n) {
    unsigned long long q = 0;
    unsigned long long m = 1;
    unsigned r;
    do {
        r = n % 10;
        q += r * r * m;
        m *= r > 3 ? 100 : 10;
    } while (n /= 10);
    return q;
}
*/

int
main() {
    printf("%llu\n", square_digits(3212u));
    printf("%llu\n", square_digits(2112u));
    printf("%llu\n", square_digits(0u));
    printf("%llu\n", square_digits(999u));
    printf("%llu\n", square_digits(10001u));
    printf("%llu\n", square_digits(3210987654u));
    printf("%llu\n", square_digits(3999999999u));
    printf("%llu\n", square_digits(UINT_MAX));
}