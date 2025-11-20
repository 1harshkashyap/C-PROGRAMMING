#include <stdio.h>

// Define constants using #define
#define PI 3.14159
#define RADIUS 5
#define MAX_SIZE 100
#define MIN_SIZE 10
#define COMPANY_NAME "TechCorp"
#define VERSION 1.5

int main() {
    printf("========== Preprocessor Constants ==========\n\n");
    
    // Using numeric constants
    printf("Circle Calculations:\n");
    printf("PI = %f\n", PI);
    printf("RADIUS = %d\n", RADIUS);
    
    float area = PI * RADIUS * RADIUS;
    printf("Area of circle = %f\n\n", area);
    
    // Using size constants
    printf("Size Constraints:\n");
    printf("MAX_SIZE = %d\n", MAX_SIZE);
    printf("MIN_SIZE = %d\n", MIN_SIZE);
    printf("Valid range: %d to %d\n\n", MIN_SIZE, MAX_SIZE);
    
    // Using string constant
    printf("Application Info:\n");
    printf("Company Name: %s\n", COMPANY_NAME);
    printf("Version: %f\n", VERSION);
    
    // Conditional compilation example
    printf("\n========== Conditional Compilation ==========\n");
    #define DEBUG 1
    
    #ifdef DEBUG
        printf("DEBUG mode is ON\n");
    #else
        printf("DEBUG mode is OFF\n");
    #endif
    
    return 0;
}