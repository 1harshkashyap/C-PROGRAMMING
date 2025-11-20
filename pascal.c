#include <stdio.h>

int main() {
    int i, k,j, coef;

    for (i = 0; i < 5; i++) {          
        coef = 1;
         for ( k=1; k<=(5-i); k++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%d ", coef);       
            coef = coef * (i - j) / (j + 1);   
        }
        printf("\n");
    }
    return 0;

}
