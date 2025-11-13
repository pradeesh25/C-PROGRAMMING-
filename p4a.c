#include <stdio.h>

/**
  C Program to check if a number is positive using an if statement.
 */
int main() {
    int number;

    printf("--- Check Positive Number Program ---\n");
    
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) return 1;
    
    // Use if statement to check the condition
    if (number > 0) {
        printf("\nResult: The number %d is positive.\n", number);
    }
    
    // To be complete, we should handle non-positive cases
    if (number <= 0) {
        printf("\nResult: The number %d is not positive (it is zero or negative).\n", number);
    }

    return 0;
}
