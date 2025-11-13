#include <stdio.h>

/**
  C Program to calculate the sum of first 'n' natural numbers using a while loop.
 */
int main() {
    int n, sum = 0;
    int i = 1; // Initialization for while loop

    printf("--- Sum of Natural Numbers (While Loop) ---\n");
    
    printf("Enter a positive integer (n): ");
    if (scanf("%d", &n) != 1) return 1;

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    
    // While loop structure:
    // 1. Condition is checked at the start of the loop
    while (i <= n) {
        sum += i; // sum = sum + i;
        i++;      // Update step (must be manually handled inside the loop body)
    }
    
    printf("\nThe sum of the first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}
