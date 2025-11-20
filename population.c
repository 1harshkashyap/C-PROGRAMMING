#include <stdio.h>

int main() {
    int i;
    int population = 100000;

    for(i = 1; i <= 10; i++) {
        population = population + (population * 10 / 100); 
        printf("Year: %d %d \n" ,i , population);
    }

    return 0;
}

