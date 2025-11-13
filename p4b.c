#include <stdio.h>

/**
 * Program to Check Voting Eligibility using an if-else statement.
 */
int main() {
    int age;
    const int VOTING_AGE = 18;

    printf("--- Check Voting Eligibility Program ---\n");
    
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) return 1;
    
    // Use if-else to determine eligibility
    if (age >= VOTING_AGE) {
        printf("\nCongratulations! You are %d years old and are eligible to vote.\n", age);
    } else {
        // Calculate remaining years
        int years_left = VOTING_AGE - age;
        printf("\nSorry, you are %d years old. You are not yet eligible to vote.\n", age);
        printf("You need to wait %d more year(s).\n", years_left);
    }

    return 0;
}
