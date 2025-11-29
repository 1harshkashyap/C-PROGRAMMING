#include<stdio.h>
int main(){
    int numbers =1, rows;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    int i=rows;
    int j =rows;
    printf("1");
    for (int i=rows ;i>=1;--i) {
        for (int j=rows;j>=1;--j) {
            numbers=numbers+2;
            printf("%d ",numbers);
        }printf("\n");

    }
    return 0;
}