#include <stdio.h>

/**
 C program for receiving an integer input from the user at runtime and printing it.
 */
int main() {
    int user_input;

    printf("--- User Input and Output Program ---\n");
    
    // Prompt the user for input
    printf("Please enter an integer: ");
    
    // Receive the input from the user using scanf
    // The '&' is the address-of operator, required for scanf.
    if (scanf("%d", &user_input) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    // Print the received input back to the user
    printf("\nYou entered: %d\n", user_input);
    
    return 0;
}
