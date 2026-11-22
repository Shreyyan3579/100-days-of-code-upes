/* Day 72 - Q122 (File Handling): Open info.txt and print all lines using fgets() until EOF. */
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
