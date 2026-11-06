/* Day 45 - Q89 (Strings): Count frequency of a given character in a string. */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000], target;
    int count = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    scanf(" %c", &target);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == target) count++;
    }

    printf("%d\n", count);
    return 0;
}
