#include <stdio.h>

/**
 *  C Program demonstrating the Conditional Operator (? :), also known as the Ternary Operator.
 * Syntax: (condition) ? expression_if_true : expression_if_false;
 */
int main() {
    int number;
    char *result;

    printf("--- Conditional Operator Demonstration ---\n");
    
    // Get input from the user
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) return 1;

    // Use the conditional operator to check if the number is even or odd
    // Condition: (number % 2 == 0)
    // If True, result = "Even"
    // If False, result = "Odd"
    result = (number % 2 == 0) ? "Even" : "Odd";
    
    printf("\nThe number %d is %s.\n", number, result);

    // Another example: Finding the maximum of two numbers
    int a = 15, b = 25;
    int max;
    
    max = (a > b) ? a : b;
    
    printf("The maximum of %d and %d is: %d\n", a, b, max);
    
    return 0;
}
