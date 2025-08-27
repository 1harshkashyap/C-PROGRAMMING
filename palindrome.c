#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Store original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;         // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        num = num / 10;               // Remove last digit
    }

    // Check palindrome
    if (original == reversed) {
        printf("%d is a Palindrome number.\n", original);
    } else {
        printf("%d is not a Palindrome number.\n", original);
    }
    return 0;
}