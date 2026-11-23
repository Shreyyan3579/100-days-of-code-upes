/* Day 73 - Q123 (File Handling): Count total characters, words, and lines in a text file. */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[256];
    printf("Enter filename: ");
    scanf("%255s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int ch, lastCh = 0, inWord = 0;
    long chars = 0, words = 0, lines = 0;

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        lastCh = ch;
        if (ch == '\n') lines++;
        if (isspace((unsigned char)ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }
    if (chars > 0 && lastCh != '\n') lines++;

    fclose(fp);
    printf("Characters: %ld\nWords: %ld\nLines: %ld\n", chars, words, lines);
    return 0;
}
