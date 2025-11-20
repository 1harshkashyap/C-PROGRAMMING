#include <stdio.h>

int main() {
    int a[3] = {10, 20, 30};
    float b[3] = {1.1, 2.2, 3.3};
    char c[3] = {'A', 'B', 'C'};

    int *ptr_int = a;
    float *ptr_float = b;
    char *ptr_char = c;

    printf("Initial addresses:\n");
    printf("ptr_int: %p, value: %d\n", ptr_int, *ptr_int);
    printf("ptr_float: %p, value: %.1f\n", ptr_float, *ptr_float);
    printf("ptr_char: %p, value: %c\n\n", ptr_char, *ptr_char);

    ptr_int++;
    ptr_float++;
    ptr_char++;

    printf("After increment:\n");
    printf("ptr_int: %p, value: %d\n", ptr_int, *ptr_int);
    printf("ptr_float: %p, value: %.1f\n", ptr_float, *ptr_float);
    printf("ptr_char: %p, value: %c\n\n", ptr_char, *ptr_char);

    ptr_int--;
    ptr_float--;
    ptr_char--;

    printf("After decrement (back to original):\n");
    printf("ptr_int: %p, value: %d\n", ptr_int, *ptr_int);
    printf("ptr_float: %p, value: %.1f\n", ptr_float, *ptr_float);
    printf("ptr_char: %p, value: %c\n", ptr_char, *ptr_char);

    return 0;
}
