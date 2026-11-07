/* Day 46 - Q91 (Strings): Remove all vowels from a string. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isVowel(char c) {
    c = (char)tolower((unsigned char)c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main(void) {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (!isVowel(s[i])) s[j++] = s[i];
    }
    s[j] = '\0';

    printf("%s\n", s);
    return 0;
}
