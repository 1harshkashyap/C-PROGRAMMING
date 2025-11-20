#include <stdio.h>

int main() {
    int num, i, isPrime = 1;   // isPrime = 1 means true

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check divisibility by 5
    if (num % 5 == 0) {
        printf("%d is divisible by 5.\n", num);
    } else {
        printf("%d is not divisible by 5.\n", num);
    }

    // Check prime
    if (num <= 1) {
        isPrime = 0;  // numbers <= 1 are not prime
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // not prime
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
