#include<stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check divisibility by 5
    if (num % 5 == 0) {
        printf("%d is divisible by 5.\n", num);
    } else {
        printf("%d is not divisible by 5.\n", num);
    }
    return 0;
}