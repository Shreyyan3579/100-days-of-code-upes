/* Day 50 - Q100 (Strings): Print all sub-strings of a string. */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    scanf("%999s", s);
    int n = (int)strlen(s);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf("%.*s\n", j - i + 1, s + i);
        }
    }
    return 0;
}
