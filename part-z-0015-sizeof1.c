#include <stdio.h>

int main() {

    int year = 2026;

    printf("The size of variable is %zu bytes in memory.\n", sizeof(year));

    float rate = 0.17;

    printf("The size of variable is %zu bytes in memory.\n", sizeof(rate));

    double pi = 3.14;

    printf("The size of variable is %zu bytes in memory.\n", sizeof(pi));

    char f_l = 'a';

    printf("The size of variable is %zu bytes in memory.\n", sizeof(f_l));

    return 0;
}

// The size of variable is 4 bytes in memory.
// The size of variable is 4 bytes in memory.
// The size of variable is 8 bytes in memory.
// The size of variable is 1 bytes in memory.
