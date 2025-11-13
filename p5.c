#include <stdio.h>

/**
 C program to perform and display the results of all four basic arithmetic operations 
 * (+, -, *, /) on two user-input numbers.
 */
int main() {
    double num1, num2;

    printf("--- All Basic Arithmetic Operations ---\n");
    
    printf("Enter the first number: ");
    if (scanf("%lf", &num1) != 1) return 1;
    
    printf("Enter the second number: ");
    if (scanf("%lf", &num2) != 1) return 1;
    
    printf("\n--- Results for %.2lf and %.2lf ---\n", num1, num2);
    
    // Addition
    printf("1. Addition: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
    
    // Subtraction
    printf("2. Subtraction: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
    
    // Multiplication
    printf("3. Multiplication: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
    
    // Division
    if (num2 != 0) {
        printf("4. Division: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
    } else {
        printf("4. Division: Cannot divide by zero.\n");
    }
    
    return 0;
}
