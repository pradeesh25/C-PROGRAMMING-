#include <stdio.h>

/**
 C Program to implement a simple calculator using the switch-case statement.
 */
int main() {
    char operator;
    double n1, n2;

    printf("--- Calculator using Switch Case ---\n");
    
    printf("Enter an operator (+, -, *, /): ");
    // Note: space before %c to consume any leading whitespace/newline
    if (scanf(" %c", &operator) != 1) return 1;

    printf("Enter two operands (numbers): ");
    if (scanf("%lf %lf", &n1, &n2) != 2) return 1;

    printf("\nCalculation: %.2lf %c %.2lf\n", n1, operator, n2);

    switch (operator) {
        case '+':
            printf("Result: %.2lf\n", n1 + n2);
            break;
        case '-':
            printf("Result: %.2lf\n", n1 - n2);
            break;
        case '*':
            printf("Result: %.2lf\n", n1 * n2);
            break;
        case '/':
            if (n2 != 0) {
                printf("Result: %.2lf\n", n1 / n2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        // Default case handles any operator that doesn't match the cases above
        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
}
