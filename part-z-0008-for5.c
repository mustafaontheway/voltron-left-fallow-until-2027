#include <stdio.h>

int main() {

    int ages[] = {17, 99, 85, 76, 20, 5, 66, 84, 96};

    int length_ages = sizeof(ages) / sizeof(ages[2]); 

    for (int i = 0; i < length_ages; i++) {

        if (ages[i] >= 18 && ages[i] <= 85) {

            printf("Age: %d -> he/she can vote!\n", ages[i]);

        } else {

            printf("Age: %d -> he/she CAN'T vote!\n", ages[i]);
        }
    }

    return 0;
}

// Age: 17 -> he/she CAN'T vote!
// Age: 99 -> he/she CAN'T vote!
// Age: 85 -> he/she can vote!
// Age: 76 -> he/she can vote!
// Age: 20 -> he/she can vote!
// Age: 5 -> he/she CAN'T vote!
// Age: 66 -> he/she can vote!
// Age: 84 -> he/she can vote!
// Age: 96 -> he/she CAN'T vote!
