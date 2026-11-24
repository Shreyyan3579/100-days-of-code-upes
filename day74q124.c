/* Day 74 - Q124 (File Handling): Copy content from source file to destination file using fgetc() and fputc(). */
#include <stdio.h>

int main(void) {
    char srcName[256], destName[256];
    printf("Enter source filename: ");
    scanf("%255s", srcName);
    printf("Enter destination filename: ");
    scanf("%255s", destName);

    FILE *src = fopen(srcName, "r");
    if (src == NULL) {
        perror("Error opening source file");
        return 1;
    }

    FILE *dest = fopen(destName, "w");
    if (dest == NULL) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);
    printf("File copied successfully to %s\n", destName);
    return 0;
}
