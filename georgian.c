#include<stdio.h>
int main(){
    int a,days,leap;
    printf("Enter year: ");
    scanf("%d",&a);
    leap = (a-1)/4 -(a-1)/100 +(a-1)/400;
    days=(a-1)*365+leap;
    if (days%7==0)
    {
        printf("Monday\n");
    }
    else if (days%7 ==1)
    {
        printf("Tuesday\n");
    }
    else if (days%7 ==2)
    {
        printf("Wednesday\n");
    }
    else if (days%7 ==3)
    {
        printf("Thursday\n");
    }
    else if (days%7 ==4)
    {
        printf("Friday\n");
    }
    else if (days%7 ==5)
    {
        printf("Saturday\n");
    }
    else
    {
        printf("Sunday\n");
    }
    return 0;
}