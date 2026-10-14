#include <stdio.h>

int main() {
    double num1, num2;
    char choice;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("\n--- Choose an Arithmetic Task ---\n");
    printf("a. Addition (+)\n");
    printf("s. Subtraction (-)\n");
    printf("m. Multiplication (*)\n");
    printf("d. Division (/)\n");
    printf("Enter your choice (a, s, m, d): ");
    scanf(" %c", &choice);
    switch (choice) {
        case 'a':
            printf("Addition: %.2lf\n", num1 + num2);
            break;
        case 's':
            printf("Subtraction: %.2lf\n", num1 - num2);
            break;
        case 'm':
            printf("Multiplication: %.2lf\n", num1 * num2);
            break;
        case 'd':
            if (num2 != 0) {
                printf("Division: %.2lf\n", num1 / num2);
            } else {
                printf("Error! Cannot divide by zero.\n");
            }
            break;
        default:
            printf("Invalid choice! Please select a valid task option.\n");
    }

    return 0;
}
