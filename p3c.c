#include <stdio.h>

/**
  C Program demonstrating the Increment (++) and Decrement (--) operators (pre- and post-fix).
 */
int main() {
    int x = 10;
    int y = 10;
    int result1, result2;

    printf("--- Increment/Decrement Operator Demonstration (Initial values: x=10, y=10) ---\n");
    
    // 1. Post-increment (value used first, then incremented)
    result1 = x++; 
    printf("\nPost-increment (result1 = x++):\n");
    printf("result1 = %d (x=10 used first)\n", result1);
    printf("New value of x: %d (x is now 11)\n", x);
    
    // 2. Pre-increment (value incremented first, then used)
    result2 = ++y; 
    printf("\nPre-increment (result2 = ++y):\n");
    printf("result2 = %d (y=11 incremented first)\n", result2);
    printf("New value of y: %d (y is now 11)\n", y);
    
    // Reset x and y for decrement demo
    x = 10;
    y = 10;
    
    // 3. Post-decrement (value used first, then decremented)
    result1 = x--; 
    printf("\nPost-decrement (result1 = x--):\n");
    printf("result1 = %d (x=10 used first)\n", result1);
    printf("New value of x: %d (x is now 9)\n", x);
    
    // 4. Pre-decrement (value decremented first, then used)
    result2 = --y; 
    printf("\nPre-decrement (result2 = --y):\n");
    printf("result2 = %d (y=9 decremented first)\n", result2);
    printf("New value of y: %d (y is now 9)\n", y);
    
    return 0;
}
