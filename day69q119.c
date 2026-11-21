/* Day 69 - Q119 (Logic Enhancers): Find the single repeated element in one iteration. */
#include <stdio.h>

#define TABLE_SIZE 200003

static int keys[TABLE_SIZE];
static char used[TABLE_SIZE];

int main(void) {
    int n, val;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        int h = ((val % TABLE_SIZE) + TABLE_SIZE) % TABLE_SIZE;
        while (used[h]) {
            if (keys[h] == val) {
                printf("%d\n", val);
                return 0;
            }
            h = (h + 1) % TABLE_SIZE;
        }
        used[h] = 1;
        keys[h] = val;
    }

    return 0;
}
