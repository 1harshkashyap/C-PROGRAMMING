#include <stdio.h>
int main() {
    int num, shift;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter number of positions to shift: ");
    scanf("%d", &shift);
    int leftShift = num << shift;
    int rightShift = num >> shift;
    printf("\nOriginal number: %d", num);
    printf("\nAfter left shift by %d: %d", shift, leftShift);
    printf("\nAfter right shift by %d: %d\n", shift, rightShift);    
    return 0;
}