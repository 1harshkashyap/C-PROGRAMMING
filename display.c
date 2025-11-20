#include <stdio.h>
int main() {
    int n, i;
    int pos = 0, neg = 0, even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] >= 0)
            pos++;
        else
            neg++;
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("\nCount of positive numbers = %d", pos);
    printf("\nCount of negative numbers = %d", neg);
    printf("\nCount of even numbers = %d", even);
    printf("\nCount of odd numbers = %d\n", odd);
    return 0;
}
