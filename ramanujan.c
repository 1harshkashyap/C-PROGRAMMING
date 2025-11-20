#include<stdio.h>
int main(){
    int num,count=0;
    printf("ENTER A NO:");
    scanf("%d",&num);
    for ( int a=1;a*a*a < num; a++)
    {
        for (int b=a ;b*b*b  < num; b++)
        {
            if (a*a*a+b*b*b==num)
            {
                count++;
            }
            

        }
    }    
if (count>1)
        {
            printf(" IS A RAMANUJAN NO:");
        }
else
            printf("NOT RAMANUJAN NO:");

    




    return 0;
}