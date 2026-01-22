#include <stdio.h>

int main() {
    short num1 = 32;
    short num2 = 53;

    float answer = (float)num1 / (float)num2;
    float percentage = answer * 100.0f;

    printf("percentage = %.2f%%", percentage);
    return 0;
}
