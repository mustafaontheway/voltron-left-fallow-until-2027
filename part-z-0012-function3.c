#include <stdio.h>

int mult(int x, int y, int z) {

    return x * y * z;
}


int main() {

    int result = mult(4, 44, 444);

    printf("%d", result); // 78144

    return 0;
}

