#include <stdio.h>
#include <stdbool.h> // Include for using bool type

/**
 * C Program demonstrating Relational Operators (>, <, ==, !=, >=, <=).
 * In C, a true condition results in 1, and a false condition results in 0.
 */
int main() {
    int a = 15;
    int b = 10;

    printf("--- Relational Operator Demonstration ---\n");
    printf("Given numbers: a = %d, b = %d\n\n", a, b);
    
    // Greater Than (>)
    printf("a > b (15 > 10): %d\n", a > b); 
    
    // Less Than (<)
    printf("a < b (15 < 10): %d\n", a < b); 
    
    // Equal To (==)
    printf("a == b (15 == 10): %d\n", a == b); 
    
    // Not Equal To (!=)
    printf("a != b (15 != 10): %d\n", a != b); 
    
    // Greater Than or Equal To (>=)
    printf("a >= 15 (15 >= 15): %d\n", a >= 15); 
    
    // Less Than or Equal To (<=)
    printf("b <= 5 (10 <= 5): %d\n", b <= 5); 

    return 0;
}
