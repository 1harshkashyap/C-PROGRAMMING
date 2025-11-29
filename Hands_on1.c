#include <stdio.h>
struct library
{
    char library_name[50];
    int library_registerno;
    int book_count;
    char library_location[100];
};
int main(){
    struct library lib;
    printf("Enter no of data to enter to library:");
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("Enter library name:");;
        scanf("%s",lib.library_name);
        printf("Enter library register no:");
        scanf("%d",&lib.library_registerno);
        printf("Enter book count:");
        scanf("%d",&lib.book_count);
        printf("enter library location:");
        scanf("%s",lib.library_location);
    for (int i = 0; i < n; i++) {
        if (lib.book_count > 1000) {
            printf("Library Name: %s\n", lib.library_name);
            printf("Library Register No: %d\n", lib.library_registerno);
            printf("Book Count: %d\n", lib.book_count);
            printf("Library Location: %s\n", lib.library_location);
            printf("Big Library")
        }
        else
        {
            printf("Small library")
        }
        
}
    return 0;
}
