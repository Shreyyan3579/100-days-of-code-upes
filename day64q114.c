/* Day 64 - Q114 (Logic Enhancers): Length of longest substring without repeating characters - O(n). */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10000];
    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int start = 0, maxLen = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) start = last[c] + 1;
        last[c] = i;
        if (i - start + 1 > maxLen) maxLen = i - start + 1;
    }

    printf("%d\n", maxLen);
    return 0;
}
