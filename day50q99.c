/* Day 50 - Q99 (Strings): Change the date format from dd/mm/yyyy to dd-Mon-yyyy. */
#include <stdio.h>

int main(void) {
    const char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    int d, m, y;

    if (scanf("%d/%d/%d", &d, &m, &y) == 3 && m >= 1 && m <= 12) {
        printf("%02d-%s-%04d\n", d, months[m - 1], y);
    } else {
        printf("Invalid date\n");
    }
    return 0;
}
