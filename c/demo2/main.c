#include <stdio.h>

int main() {
    int num = 42;
    float pi = 3.14159;

    // basic formatting
    printf("Basic: %d\n", num);
    printf("Width: %8d\n", num);
    printf("Zero-pad: %05d\n", num);
    printf("Left-align: %-8d\n", num);

    // float formatting
    printf("Float: %.2f\n", pi);
    printf("Width+precision: %8.2f\n", pi);

    // other bases and formats
    printf("Hex: %x\n", num);
    printf("Scientific: %.2e\n", pi);

    return 0;
}
