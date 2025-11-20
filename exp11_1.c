#include <stdio.h>
void printBinary(unsigned int n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}
int main() {
    unsigned int a, b;
    printf("Enter two integers: ");
    scanf("%u %u", &a, &b);
    unsigned int andResult = a & b;
    unsigned int orResult = a | b;
    unsigned int notA = ~a;
    unsigned int notB = ~b;
    printf("\nBitwise Operations:\n");
    printf("\nA = %u (", a);
    printBinary(a);
    printf(")\n");
    printf("B = %u (", b);
    printBinary(b);
    printf(")\n");
    printf("\nA & B = %u (", andResult);
    printBinary(andResult);
    printf(")\n");
    printf("A | B = %u (", orResult);
    printBinary(orResult);
    printf(")\n");
    printf("~A = %u (", notA);
    printBinary(notA);
    printf(")\n");
    printf("~B = %u (", notB);
    printBinary(notB);
    printf(")\n");
    return 0;
}