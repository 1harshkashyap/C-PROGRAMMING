//C PROGRAMME temperature from celsius to farhen
#include <stdio.h>
int main(){
    float a;
    printf ("ENTER TEMPERATURE IN DEGREE CELSIUS:");
    scanf("%f",&a);
    printf("THE TEPERATURE IN DEGREE FAHRENHEIT IS: %f", (a* 9/5) + 32);
    return 0;
}