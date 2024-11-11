#include <stdio.h>

int
check_exam(size_t n, const char answers[n], const char student[n]) {
    int res = 0;
    for (size_t i = 0; i < n; ++i) {
        if (answers[i] == student[i]) {
            res += 4;
        } else if (student[i] != ' ') {
            res--;
        }
    }
    return res < 0 ? 0 : res;
}

int
main() {
    {
        const char answers[4] = {'a', 'a', 'b', 'b'};
        const char student[4] = {'a', 'c', 'b', 'd'};
        printf("%d\n", check_exam(4, answers, student));
    }
    {
        const char answers[4] = {'a', 'a', 'c', 'b'};
        const char student[4] = {'a', 'a', 'b', ' '};
        printf("%d\n", check_exam(4, answers, student));
    }
    {
        const char answers[4] = {'a', 'a', 'b', 'c'};
        const char student[4] = {'a', 'a', 'b', 'c'};
        printf("%d\n", check_exam(4, answers, student));
    }
    {
        const char answers[4] = {'b', 'c', 'b', 'a'};
        const char student[4] = {' ', 'a', 'a', 'c'};
        printf("%d\n", check_exam(4, answers, student));
    }
}
