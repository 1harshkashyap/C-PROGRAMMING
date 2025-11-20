#include <stdio.h>

void modifyValues(int *x, float *y, char *z) {
    *x += 10;
    *y *= 2;
    *z = 'Z';
}

int main() {
    int a = 5;
    float b = 3.5;
    char c = 'A';

    printf("Before modification:\n");
    printf("a = %d, b = %.2f, c = %c\n\n", a, b, c);

    modifyValues(&a, &b, &c);

    printf("After modification:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);

    return 0;
}
