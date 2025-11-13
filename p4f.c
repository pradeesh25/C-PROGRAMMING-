#include <stdio.h>

/**
 C Program to calculate the sum of first 'n' natural numbers using a for loop.
 */
int main() {
    int n, sum = 0;

    printf("--- Sum of Natural Numbers (For Loop) ---\n");
    
    printf("Enter a positive integer (n): ");
    if (scanf("%d", &n) != 1) return 1;

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    
    // For loop structure:
    // 1. Initialization: int i = 1 (start from 1st natural number)
    // 2. Condition: i <= n (continue until i exceeds n)
    // 3. Update: i++ (increment by 1 in each iteration)
    for (int i = 1; i <= n; i++) {
        sum += i; // sum = sum + i;
    }
    
    printf("\nThe sum of the first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}
