#include <stdio.h>

int main() {

    int x = 22;

    int y = 7;

    float z = 7;

    double div1 = (double) x / y;

    printf("Div 1: %lf\n", div1);

    float div2 = x / z;

    printf("Div 2: %f\n", div2);

    return 0;
}

// Div 1: 3.142857
// Div 2: 3.142857
