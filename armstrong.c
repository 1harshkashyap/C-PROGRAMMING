#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    double result = 0.0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    // Calculate sum of digits raised to power n
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    // Check Armstrong
    if ((int)result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}