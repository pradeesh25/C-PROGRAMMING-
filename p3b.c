#include <stdio.h>

/**
 C Program for swapping two numbers using a temporary variable.
 */
int main() {
    int a, b;
    int temp; // Temporary variable for swapping

    printf("--- Swapping of Two Numbers ---\n");
    
    // Get input from the user
    printf("Enter first number (A): ");
    if (scanf("%d", &a) != 1) return 1;
    
    printf("Enter second number (B): ");
    if (scanf("%d", &b) != 1) return 1;
    
    printf("\nBefore swapping:\n");
    printf("A = %d, B = %d\n", a, b);
    
    // Swapping logic
    temp = a; // 1. Store the value of 'a' in 'temp'
    a = b;    // 2. Assign the value of 'b' to 'a'
    b = temp; // 3. Assign the original value of 'a' (stored in 'temp') to 'b'
    
    printf("\nAfter swapping:\n");
    printf("A = %d, B = %d\n", a, b);
    
    return 0;
}
