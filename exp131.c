#include <stdio.h>

// Arithmetic operation macros
#define ADD(a, b) ((a) + (b))
#define SUBTRACT(a, b) ((a) - (b))
#define MULTIPLY(a, b) ((a) * (b))
#define DIVIDE(a, b) ((a) / (b))
#define MODULUS(a, b) ((a) % (b))
#define SQUARE(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))
#define AVERAGE(a, b) (((a) + (b)) / 2)
#define POWER2(x) ((x) * (x))
#define POWER3(x) ((x) * (x) * (x))

int main() {
    printf("========== Arithmetic Macro Functions ==========\n\n");
    
    int num1 = 15, num2 = 4;
    
    printf("Given Numbers: num1 = %d, num2 = %d\n\n", num1, num2);
    
    // Basic arithmetic operations
    printf("Basic Arithmetic Operations:\n");
    printf("ADD(%d, %d) = %d\n", num1, num2, ADD(num1, num2));
    printf("SUBTRACT(%d, %d) = %d\n", num1, num2, SUBTRACT(num1, num2));
    printf("MULTIPLY(%d, %d) = %d\n", num1, num2, MULTIPLY(num1, num2));
    printf("DIVIDE(%d, %d) = %d\n", num1, num2, DIVIDE(num1, num2));
    printf("MODULUS(%d, %d) = %d\n\n", num1, num2, MODULUS(num1, num2));
    
    // Power operations
    printf("Power Operations:\n");
    printf("SQUARE(%d) = %d\n", num1, SQUARE(num1));
    printf("CUBE(%d) = %d\n", num1, CUBE(num1));
    printf("POWER2(%d) = %d\n", num2, POWER2(num2));
    printf("POWER3(%d) = %d\n\n", num2, POWER3(num2));
    
    // Average calculation
    printf("Average:\n");
    printf("AVERAGE(%d, %d) = %d\n\n", num1, num2, AVERAGE(num1, num2));
    
    // Using with different values
    float x = 5.5, y = 2.5;
    printf("Floating-point Operations:\n");
    printf("ADD(%.1f, %.1f) = %.1f\n", x, y, ADD(x, y));
    printf("MULTIPLY(%.1f, %.1f) = %.1f\n", x, y, MULTIPLY(x, y));
    printf("AVERAGE(%.1f, %.1f) = %.1f\n", x, y, AVERAGE(x, y));
    
    return 0;
}