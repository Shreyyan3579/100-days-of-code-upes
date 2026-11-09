/* Day 48 - Q96 (Strings): Reverse each word in a sentence without changing the word order. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void reverseRange(char *s, int l, int r) {
    while (l < r) {
        char tmp = s[l];
        s[l++] = s[r];
        s[r--] = tmp;
    }
}

int main(void) {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int i = 0;
    while (s[i] != '\0') {
        while (isspace((unsigned char)s[i])) i++;
        int start = i;
        while (s[i] != '\0' && !isspace((unsigned char)s[i])) i++;
        reverseRange(s, start, i - 1);
    }

    printf("%s\n", s);
    return 0;
}
