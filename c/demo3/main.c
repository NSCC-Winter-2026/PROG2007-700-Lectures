#include <stdio.h>
#include <stdlib.h>

int main() {

    // basic for loop
    printf("Counting up:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d", i);
    }
    printf("\n");

    // counting down
    printf("Counting down:\n");
    for (int i = 5; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    // step by 2
    printf("Even numbers:\n");
    for (int i = 2; i <= 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    // multiple variables
    printf("Multiple variables:\n");
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i=%d, j=%d\n", i, j);
    }

    return 0;
}
