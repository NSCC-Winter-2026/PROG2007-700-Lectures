#include <stdio.h>
#include <stdlib.h>

int main() {

    int grade;

    printf("Enter a numeric grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Invalid grade.\n");
    } else {

        char letter;
        if (grade >= 90) {
            letter = 65;
        } else if (grade >= 80) {
            letter = 'B';
        } else if (grade >= 70) {
            letter = 'C';
        } else if (grade >= 60) {
            letter = 'D';
        } else {
            letter = 'F';
        }

        printf("Grade = %d/100 (%c)\n", grade, letter);

        if (grade == 100) {
            printf("A perfect score!\n");
        } else {
            switch (grade / 10) {
                case (9):
                    letter = 'A';
                    break;
                case (8):
                    letter = 'B';
                    break;
                case (7):
                    letter = 'C';
                case (6):
                    letter = 'D';
                    break;
                default:
                    letter = 'F';
            }
            printf("Grade = %d/100 (%c)\n", grade, letter);
        }
    }

    return 0;
}
