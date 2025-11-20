#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    char text[100];
    printf("Enter text to write into the file: ");
    fgets(text, sizeof(text), stdin);
    fp = fopen("newfile.txt", "w");
    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }
    fputs(text, fp);
    fclose(fp);
    printf("Text written to newfile.txt successfully.\n");
    return 0;
}