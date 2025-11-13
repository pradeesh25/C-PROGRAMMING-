#include <stdio.h>

/**
 C program to display the values of different fundamental data types.
 */
int main() {
    // Integer type
    int num_int = 42;
    // Floating point type
    float num_float = 3.14159;
    // Double precision floating point type
    double num_double = 12345.6789;
    // Character type
    char char_val = 'A';
    
    printf("--- Displaying Different Data Types ---\n");
    
    // %d or %i for integers
    printf("Integer (int): %d\n", num_int);
    
    // %f for floats (and doubles by default in printf)
    printf("Float (float): %.2f\n", num_float);
    
    // %lf is typically used in scanf for double, but %f works in printf
    printf("Double (double): %.4lf\n", num_double); 
    
    // %c for characters
    printf("Character (char): %c\n", char_val);
    
    return 0;
}
