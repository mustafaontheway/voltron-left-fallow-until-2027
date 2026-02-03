#include <stdio.h>
#include <string.h>

int main() {

    char greet[] = "hi";

    printf("%s\n", greet);

    printf("%c\n", greet[0]);

    printf("%c\n", greet[1]);

    printf("---------------------------\n");

    int len_greet = sizeof(greet); 

    printf("Length: %d\n", len_greet); // 3 => h, i, /0 

    printf("---------------------------\n");

    printf("Actual length: %d\n", strlen(greet)); 

    printf("---------------------------\n");

    for (int i = 0; i < strlen(greet); i++) {

        printf("Char: %c\n", greet[i]);
    }

    return 0;
}

// hi
// h
// i
// ---------------------------
// Length: 3
// ---------------------------
// Actual length: 2
// ---------------------------
// Char: h
// Char: i
