/* Day 46 - Q92 (Strings): Find the first repeating lowercase alphabet in a string. */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    int seen[26] = {0};

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (seen[s[i] - 'a']) {
                printf("%c\n", s[i]);
                return 0;
            }
            seen[s[i] - 'a'] = 1;
        }
    }

    printf("None\n");
    return 0;
}
