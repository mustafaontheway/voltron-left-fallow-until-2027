#include <stdio.h>
#include <stdbool.h>

int main() {

    int x = 5024;

    int first_num = x % 10;

    int second_num = (x / 10) % 10;

    int third_num = (x / 100) % 10;

    int fourth_num = (x / 1000) % 10;

    printf("First num: %d\n", first_num);
    printf("Second num: %d\n", second_num);
    printf("Third num: %d\n", third_num);
    printf("Fourth num: %d\n", fourth_num);

    return 0;
}

// First num: 4
// Second num: 2
// Third num: 0
// Fourth num: 5
