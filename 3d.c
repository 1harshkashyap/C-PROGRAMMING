#include <stdio.h>
int main() {
    int m, n, p, q;
    int A[20][20], B[20][20], C[20][20];
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Condition not satisfied: Columns of A (%d) != Rows of B (%d)\n", n, p);
        return 0;
    }
    printf("\nEnter elements of Matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements of Matrix B (%d x %d):\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nMatrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B (%d x %d):\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }
    printf("\nResultant Matrix C (%d x %d):\n", m, q);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
