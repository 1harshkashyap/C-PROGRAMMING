#include <stdio.h>

// Define function-like macros
#define ADD(a, b) ((a) + (b))
#define SUBTRACT(a, b) ((a) - (b))
#define MULTIPLY(a, b) ((a) * (b))
#define DIVIDE(a, b) ((a) / (b))
#define SQUARE(x) ((x) * (x))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    printf("========== Function-like Macros ==========\n\n");
    
    int x = 10, y = 5;
    
    // Arithmetic operations
    printf("Arithmetic Operations:\n");
    printf("ADD(%d, %d) = %d\n", x, y, ADD(x, y));
    printf("SUBTRACT(%d, %d) = %d\n", x, y, SUBTRACT(x, y));
    printf("MULTIPLY(%d, %d) = %d\n", x, y, MULTIPLY(x, y));
    printf("DIVIDE(%d, %d) = %d\n\n", x, y, DIVIDE(x, y));
    
    // Power and absolute value
    printf("Power and Absolute Value:\n");
    printf("SQUARE(%d) = %d\n", x, SQUARE(x));
    printf("ABS(-%d) = %d\n\n", x, ABS(-x));
    
    // Comparison operations
    printf("Comparison Operations:\n");
    printf("MAX(%d, %d) = %d\n", x, y, MAX(x, y));
    printf("MIN(%d, %d) = %d\n\n", x, y, MIN(x, y));
    
    // Using with different values
    float a = 3.5, b = 7.2;
    printf("Floating-point Operations:\n");
    printf("ADD(%.1f, %.1f) = %.1f\n", a, b, ADD(a, b));
    printf("MAX(%.1f, %.1f) = %.1f\n", a, b, MAX(a, b));
    
    return 0;
}