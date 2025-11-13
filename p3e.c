#include <stdio.h>

/**
 * C Program demonstrating Logical Operators (&&, ||, !).
 * The result is 1 (true) or 0 (false).
 */
int main() {
    int age = 20;
    int has_license = 1; // 1 means true
    int is_student = 0;  // 0 means false

    printf("--- Logical Operator Demonstration ---\n");
    printf("Conditions: age=20, has_license=1 (True), is_student=0 (False)\n\n");
    
    // 1. Logical AND (&&): True if BOTH conditions are true
    // (age > 18) && (has_license == 1) 
    printf("Can drive? ((age > 18) && has_license): %d\n", (age > 18) && has_license); 
    
    // 2. Logical OR (||): True if AT LEAST ONE condition is true
    // (is_student == 1) || (age < 15)
    printf("Is young or student? (is_student || (age < 15)): %d\n", is_student || (age < 15)); 
    
    // 3. Logical NOT (!): Inverts the condition (True becomes False, False becomes True)
    // !(is_student == 1)
    printf("Is NOT a student? (!is_student): %d\n", !is_student); 
    
    return 0;
}
