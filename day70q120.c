/* Day 70 - Q120 (File Handling / Strings): Convert a string input to sentence case. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int capitalizeNext = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (isalpha(c)) {
            if (capitalizeNext) {
                s[i] = (char)toupper(c);
                capitalizeNext = 0;
            } else {
                s[i] = (char)tolower(c);
            }
        } else if (c == '.' || c == '!' || c == '?') {
            capitalizeNext = 1;
        }
    }

    printf("%s\n", s);
    return 0;
}
