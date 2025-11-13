#include <stdio.h>

/**
  C Program to find the largest of three numbers using if-else-if ladder.
 */
int main() {
    int num1, num2, num3;

    printf("--- Find the Largest of Three Numbers ---\n");
    
    printf("Enter first number: ");
    if (scanf("%d", &num1) != 1) return 1;
    
    printf("Enter second number: ");
    if (scanf("%d", &num2) != 1) return 1;
    
    printf("Enter third number: ");
    if (scanf("%d", &num3) != 1) return 1;
    
    printf("\nGiven numbers: %d, %d, %d\n", num1, num2, num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    } 
    else {
        printf("The largest number is: %d\n", num3);
    }
    
    return 0;
}
