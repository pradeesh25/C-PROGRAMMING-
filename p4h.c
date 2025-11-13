#include <stdio.h>

/**
  C Program to calculate the sum of first 'n' natural numbers using a do-while loop.
 * Note: The do-while loop executes the body at least once, regardless of the condition.
 */
int main() {
    int n, sum = 0;
    int i = 1; // Initialization for do-while loop

    printf("--- Sum of Natural Numbers (Do-While Loop) ---\n");
    
    printf("Enter a positive integer (n): ");
    if (scanf("%d", &n) != 1) return 1;

    if (n < 1) {
        printf("The sum is 0 (since n is not positive).\n");
        return 0;
    }
    
    // Do-While loop structure:
    // 1. Body (do block) executes first
    // 2. Condition (while) is checked at the end
    do {
        sum += i; // sum = sum + i;
        i++;      // Update step
    } while (i <= n);
    
    printf("\nThe sum of the first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}
