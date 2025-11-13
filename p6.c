#include <stdio.h>

/**
 C program to compare two numbers and find the biggest (largest).
 */
int main() {
    double num1, num2;

    printf("--- Number Comparison (Find Biggest Number) ---\n");
    
    printf("Enter the first number: ");
    if (scanf("%lf", &num1) != 1) return 1;
    
    printf("Enter the second number: ");
    if (scanf("%lf", &num2) != 1) return 1;
    
    printf("\nComparing %.2lf and %.2lf:\n", num1, num2);

    if (num1 > num2) {
        printf("%.2lf is the biggest number.\n", num1);
    } else if (num2 > num1) {
        printf("%.2lf is the biggest number.\n", num2);
    } else {
        printf("Both numbers are equal: %.2lf\n", num1);
    }
    
    return 0;
}
