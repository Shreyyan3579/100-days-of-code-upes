/* Day 48 - Q95 (Strings): Check if one string is a rotation of another. */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[1000], s2[1000], doubled[2005];
    scanf("%999s %999s", s1, s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }

    strcpy(doubled, s1);
    strcat(doubled, s1);

    if (strstr(doubled, s2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
