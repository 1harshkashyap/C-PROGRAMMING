#include <stdio.h>
int main() {
    float principle,rate,time,si;//ENTER THE VALUE FOR Which you want to calculate simple interest
    printf("ENTER PRINCIPLE:");
    scanf("%f",&principle);
    printf("ENTER RATE:");
    scanf("%f",&rate);
    printf("ENTER TIME:");
    scanf("%f",&time);
    si=(principle*rate*time)/100;
    printf("SIMPLE INTEREST: %f",si);
    return 0;
} 