/* Day 49 - Q97 (Strings): Print the initials of a name. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char name[1000];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; name[i] != '\0'; i++) {
        if (!isspace((unsigned char)name[i]) &&
            (i == 0 || isspace((unsigned char)name[i - 1]))) {
            printf("%c.", toupper((unsigned char)name[i]));
        }
    }
    printf("\n");
    return 0;
}
