#include <stdio.h>

/**
 C Program demonstrating nested if statements to check the positivity of two numbers.
 */
int main() {
    int num1, num2;

    printf("--- Nested If: Positivity of Two Numbers ---\n");
    
    printf("Enter first number: ");
    if (scanf("%d", &num1) != 1) return 1;
    
    printf("Enter second number: ");
    if (scanf("%d", &num2) != 1) return 1;
    
    printf("\nChecking numbers: %d and %d\n", num1, num2);

    // Outer if: Check if the first number is positive
    if (num1 > 0) {
        printf("First number (%d) is positive.\n", num1);
        
        // Inner if: Check the second number
        if (num2 > 0) {
            printf("Second number (%d) is also positive. Both are positive.\n", num2);
        } else {
            printf("Second number (%d) is NOT positive.\n", num2);
        }
    } else {
        printf("First number (%d) is NOT positive.\n", num1);
        
        // Nested if to check the second number here too
        if (num2 > 0) {
            printf("But the second number (%d) is positive.\n", num2);
        }
    }
    
    return 0;
}
