#include <stdio.h>
int fact_recursive(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact_recursive(n - 1);
    }
}
int fact_non_recursive(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int binomial_coefficient(int n, int r, int (*fact_func)(int)) {
    return fact_func(n) / (fact_func(r) * fact_func(n - r));
}
int main() {            
    int n, r;
    printf("Enter values for n and r (n >= r >= 0): ");
    scanf("%d %d", &n, &r);
    if (n < r || r < 0) {
        printf("Invalid input. Ensure that n >= r >= 0.\n");
        return 1;
    }
    printf("Using Recursive Factorial:\n");
    printf("C(%d, %d) = %d\n", n, r, binomial_coefficient(n, r, fact_recursive));
    printf("Using Non-Recursive Factorial:\n");
    printf("C(%d, %d) = %d\n", n, r, binomial_coefficient(n, r, fact_non_recursive));
    return 0;
}