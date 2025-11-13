#include <stdio.h>

/**
 *  Program demonstrating the Comma Operator (,).
 * The comma operator evaluates expressions from left to right and returns the value of the rightmost expression.
 */
int main() {
    int a = 10, b = 20, c = 30;
    int result;

    printf("--- Comma Operator Demonstration ---\n");
    
    // The comma operator in action:
    // 1. (a = 50) is evaluated, a becomes 50.
    // 2. (b = a + c) is evaluated, b becomes 50 + 30 = 80.
    // 3. (b + 100) is evaluated, which is 80 + 100 = 180. This is the value assigned to 'result'.
    result = (a = 50, b = a + c, b + 100);
    
    printf("After operation: result = (a = 50, b = a + c, b + 100)\n");
    printf("Final value of a: %d\n", a);        // Output: 50
    printf("Final value of b: %d\n", b);        // Output: 80
    printf("Final value of result: %d\n", result); // Output: 180 (value of the rightmost expression)

    printf("\nCommon use case: in a for loop header.\n");
    int i, j;
    for (i = 1, j = 10; i <= 5; i++, j--) {
        printf("i=%d, j=%d\n", i, j);
    }
    
    return 0;
}
