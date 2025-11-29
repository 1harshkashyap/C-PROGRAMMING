#include<stdio.h>
gcd (int a,int b);
int gcd(int a, int b){
    if (b==0)
    {
        return 0;
    }
    
    return gcd(b, a%b);
}
int main(){
    int num1, num2;
    printf("Enter first numbers:");
    scanf("%d",&num1);
    printf("Enter second numbers:",&num2);
    scanf("%d",&num2);
    int result = gcd(num1, num2);
    printf("GCD is %d \n",result);
    return 0;
}