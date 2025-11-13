#include <stdio.h>

/**
 Program to print the memory size (in bytes) of fundamental data types using the sizeof operator.
 */
int main() {
    printf("--- Size of Each Data Type ---\n");
    
    printf("Size of 'char': %zu byte(s)\n", sizeof(char));
    printf("Size of 'int': %zu byte(s)\n", sizeof(int));
    printf("Size of 'short': %zu byte(s)\n", sizeof(short));
    printf("Size of 'long': %zu byte(s)\n", sizeof(long));
    printf("Size of 'float': %zu byte(s)\n", sizeof(float));
    printf("Size of 'double': %zu byte(s)\n", sizeof(double));
    printf("Size of 'long double': %zu byte(s)\n", sizeof(long double));
    
    return 0;
}
