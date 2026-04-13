#include <stdio.h>

int main() {
    FILE *src, *dest;
    char srcFile[50], destFile[50];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", srcFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source file for reading
    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }

    // Open destination file for writing
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not open destination file!\n");
        fclose(src);
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("\nFile copied successfully!\n");

    fclose(src);
    fclose(dest);

    return 0;
}
