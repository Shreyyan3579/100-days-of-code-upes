/* Day 45 - Q90 (Strings): Toggle case of each character in a string. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; s[i] != '\0'; i++) {
        if (islower((unsigned char)s[i]))
            s[i] = (char)toupper((unsigned char)s[i]);
        else if (isupper((unsigned char)s[i]))
            s[i] = (char)tolower((unsigned char)s[i]);
    }

    printf("%s\n", s);
    return 0;
}
