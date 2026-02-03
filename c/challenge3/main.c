#include <stdio.h>
#include <stdlib.h>

int main() {

    int first;
    int second;

    printf("Enter the first number: ");
    scanf("%d", &first);
    printf("Enter the second number: ");
    scanf("%d", &second);

    int menu_option;
    do {
        printf("\n--- Menu ---\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Choose: ");
        scanf("%d", &menu_option);

        switch (menu_option) {
        case 1: // addition
            printf("%d + %d = %d\n", first, second, first + second);
            break;
        case 2: // subtraction
            printf("%d - %d = %d\n", first, second, first - second);
            break;
        case 3: // multiplication
            printf("%d * %d = %d\n", first, second, first * second);
            break;
        case 4: // division
            printf("%d / %d = %.2f\n", first, second, (float)first / second);
            break;
        case 5: // exit
            break;
        default: // invalid
            printf("Invalid selection.\n");
        }

    } while (menu_option >= 1 && menu_option <= 4);

    printf("Exiting...\n");

    return 0;
}
