#include <stdio.h>

/**
 program for receiving and displaying various fundamental data types from the user.
 */
int main() {
    int user_int;
    float user_float;
    char user_char;
    
    printf("--- Input and Display Various Data Types ---\n");
    
    // Input for Integer
    printf("Enter an integer: ");
    if (scanf("%d", &user_int) != 1) return 1;
    
    // Input for Float
    printf("Enter a floating point number: ");
    // Note: %f for float in both scanf and printf
    if (scanf("%f", &user_float) != 1) return 1;
    
    // Input for Character
    printf("Enter a single character: ");
    // Clear the buffer before reading a char to avoid reading the newline from previous input
    while(getchar() != '\n'); 
    if (scanf("%c", &user_char) != 1) return 1;
    
    printf("\n--- Displaying Entered Values ---\n");
    
    printf("You entered:\n");
    printf("Integer: %d\n", user_int);
    printf("Float: %.2f\n", user_float);
    printf("Character: %c\n", user_char);
    
    return 0;
}
