//Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given ranges. 
#include <stdio.h>
int ISPRIME(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Is a prime number
}
int main() {
    int lower, upper;
    printf("Enter the lower and upper range: ");
    scanf("%d %d", &lower, &upper);
    
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (int num = lower; num <= upper; num++) {
        if (ISPRIME(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
