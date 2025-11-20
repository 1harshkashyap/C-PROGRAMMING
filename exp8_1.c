#include <stdio.h>
int main() {
    int a = 10;
    float b = 25.5;
    char c = 'A';
    int *ptr_int = &a;
    float *ptr_float = &b;
    char *ptr_char = &c;
    printf("Value of a: %d\n", a);
    printf("Address stored in ptr_int: %p\n", ptr_int);
    printf("Value pointed by ptr_int: %d\n\n", *ptr_int);
    printf("Value of b: %.2f\n", b);
    printf("Address stored in ptr_float: %p\n", ptr_float);
    printf("Value pointed by ptr_float: %.2f\n\n", *ptr_float);
    printf("Value of c: %c\n", c);
    printf("Address stored in ptr_char: %p\n", ptr_char);
    printf("Value pointed by ptr_char: %c\n", *ptr_char);
    return 0;
}