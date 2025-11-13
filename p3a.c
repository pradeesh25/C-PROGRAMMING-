#include <stdio.h>

/**
 C Program to demonstrate basic arithmetic operations (+, -, *, /, %).
 */
int main() {
    int num1 = 20, num2 = 6;
    int sum, difference, product, remainder;
    float quotient;

    printf("--- Arithmetic Operations Demonstration ---\n");
    printf("Given numbers are: num1 = %d and num2 = %d\n\n", num1, num2);
    
    // Addition
    sum = num1 + num2;
    printf("Addition (sum): %d + %d = %d\n", num1, num2, sum);
    
    // Subtraction
    difference = num1 - num2;
    printf("Subtraction (difference): %d - %d = %d\n", num1, num2, difference);
    
    // Multiplication
    product = num1 * num2;
    printf("Multiplication (product): %d * %d = %d\n", num1, num2, product);
    
    // Division (Integer)
    int int_quotient = num1 / num2;
    printf("Division (integer result): %d / %d = %d\n", num1, num2, int_quotient);

    // Division (Floating Point) - requires type casting
    quotient = (float)num1 / num2;
    printf("Division (floating point result): %d / %d = %.2f\n", num1, num2, quotient);
    
    // Modulo (Remainder)
    remainder = num1 % num2;
    printf("Modulo (remainder): %d %% %d = %d\n", num1, num2, remainder);
    
    return 0;
}
