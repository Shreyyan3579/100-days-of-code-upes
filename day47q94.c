/* Day 47 - Q94 (Strings): Find the longest word in a sentence. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int maxStart = 0, maxLen = 0, i = 0;
    while (s[i] != '\0') {
        while (isspace((unsigned char)s[i])) i++;
        int start = i;
        while (s[i] != '\0' && !isspace((unsigned char)s[i])) i++;
        int len = i - start;
        if (len > maxLen) {
            maxLen = len;
            maxStart = start;
        }
    }

    printf("%.*s\n", maxLen, s + maxStart);
    return 0;
}
