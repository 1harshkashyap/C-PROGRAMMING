#include <stdio.h>

int main() {
    float w, h, BMI;

    printf("ENTER WEIGHT (kg):\n");
    scanf("%f", &w);

    printf("ENTER HEIGHT (m):\n");
    scanf("%f", &h);

    BMI = w / (h * h);

    if (BMI < 15) {
        printf("STARVATION\n");
    }
    else if (BMI > 15 && BMI <= 17.5) {
        printf("ANOREXIC\n");
    }
    else if (BMI > 17.5 && BMI <= 18.5) {
        printf("UNDERWEIGHT\n");
    }
    else if (BMI > 18.5 && BMI <= 24.9) {
        printf("IDEAL\n");
    }
    else if (BMI > 24.9 && BMI <= 29.9) {
        printf("OVERWEIGHT\n");
    }
    else if (BMI > 29.9 && BMI <= 39.9) {
        printf("OBESE\n");
    }
    else 
     {
        printf("MORBIDLY OBESE\n");
    }

    return 0;
}
