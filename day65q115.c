/* Day 65 - Q115 (Logic Enhancers): Check if two lowercase strings are valid anagrams. */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10000], t[10000];
    int count[26] = {0};
    scanf("%9999s %9999s", s, t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
