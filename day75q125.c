/* Day 75 - Q125 (File Handling): Open an existing file in append mode and append a new line of text. */
#include <stdio.h>

int main(void) {
    char filename[256], text[1000];
    printf("Enter filename: ");
    scanf("%255s", filename);
    getchar(); /* consume leftover newline */

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);
    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
