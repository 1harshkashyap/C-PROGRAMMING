#include <stdio.h>

int main() {
    int a, b, c;

    printf("ENTER THE SIDE a :\n");
    scanf("%d", &a);

    printf("ENTER THE SIDE b :\n");
    scanf("%d", &b);

    printf("ENTER THE SIDE c :\n");
    scanf("%d", &c);

    // Check validity
    if(a+b > c && b+c > a && c+a > b) {
        printf("THE TRIANGLE IS VALID\n");

        if(a == b && b == c) {
            printf("IT IS AN EQUILATERAL TRIANGLE\n");
        }
        else if(a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b) {
            printf("IT IS A RIGHT ANGLED TRIANGLE\n");
        }
        else if(a == b || b == c || c == a) {
            printf("IT IS AN ISOSCELES TRIANGLE\n");
        }
        else {
            printf("IT IS A SCALENE TRIANGLE\n");
        }
    }
    else {
        printf("THE TRIANGLE IS NOT VALID\n");
    }

    return 0;
}
