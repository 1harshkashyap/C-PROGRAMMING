#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex readComplex();
void writeComplex(struct Complex c);
struct Complex addComplex(struct Complex c1, struct Complex c2);
struct Complex subComplex(struct Complex c1, struct Complex c2);
int main() {
    struct Complex num1, num2, sum, diff;
    printf("Enter first complex number:\n");
    num1 = readComplex();
    printf("Enter second complex number:\n");
    num2 = readComplex();
    sum = addComplex(num1, num2);
    diff = subComplex(num1, num2);
    printf("\nFirst complex number: ");
    writeComplex(num1);
    printf("Second complex number: ");
    writeComplex(num2);
    printf("\nSum: ");
    writeComplex(sum);
    printf("Difference: ");
    writeComplex(diff);
    return 0;
}
struct Complex readComplex() {
    struct Complex temp;
    printf("Enter real part: ");
    scanf("%f", &temp.real);
    printf("Enter imaginary part: ");
    scanf("%f", &temp.imag);
    return temp;
}
void writeComplex(struct Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
struct Complex subComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}