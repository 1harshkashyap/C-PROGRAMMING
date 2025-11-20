#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char filename[100];
    char line[256]; 
    printf("Enter the filename to open: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    printf("\nFile contents:\n\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}