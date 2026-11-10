/* Day 49 - Q98 (Strings): Print initials of a name with the surname displayed in full. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char name[1000];
    fgets(name, sizeof(name), stdin);
    int len = (int)strcspn(name, "\n");
    name[len] = '\0';

    while (len > 0 && isspace((unsigned char)name[len - 1])) name[--len] = '\0';

    int lastSpace = -1;
    for (int i = 0; i < len; i++) {
        if (isspace((unsigned char)name[i])) lastSpace = i;
    }

    if (lastSpace == -1) {
        printf("%s\n", name);
        return 0;
    }

    for (int i = 0; i < lastSpace; i++) {
        if (!isspace((unsigned char)name[i]) &&
            (i == 0 || isspace((unsigned char)name[i - 1]))) {
            printf("%c.", toupper((unsigned char)name[i]));
        }
    }
    printf(" %s\n", name + lastSpace + 1);
    return 0;
}
