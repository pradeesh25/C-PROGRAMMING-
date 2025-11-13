#include <stdio.h>

/**
  C Program demonstrating simple output using printf().
 */
int main() {
    int age = 25;
    float height = 5.9;
    char initial = 'G';

    printf("--- Output Statement Demonstration ---\n");
    
    // Printing a simple string
    printf("Hello! This is a simple C program.\n");
    
    // Printing integer variable
    printf("My age is: %d years.\n", age);
    
    // Printing float variable (using .1f for one decimal place)
    printf("My height is: %.1f feet.\n", height);
    
    // Printing character variable
    printf("My first initial is: %c.\n", initial);
    
    // Combining text and multiple variables
    printf("\nSummary: Age=%d, Height=%.1f, Initial=%c\n", age, height, initial);
    
    return 0;
}
