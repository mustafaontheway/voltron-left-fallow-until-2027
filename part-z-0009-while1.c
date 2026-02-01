#include <stdio.h>

int main() {

    int counter = 0;

    while (counter <= 6) {

        printf("Counter: %d\n", counter);

        counter += 2;
    }

    return 0;
}

// Counter: 0
// Counter: 2
// Counter: 4
// Counter: 6
