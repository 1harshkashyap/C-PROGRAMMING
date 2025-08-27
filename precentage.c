#include <stdio.h>
int main(){
    float radius;
    printf("ENTER RADIUS :");
    scanf("%f",&radius);
    float pi=3.1415;
    float area =pi*radius*radius;
    printf("THE AREA OF CIRCLE IS:%f",area); 
    return 0;
}