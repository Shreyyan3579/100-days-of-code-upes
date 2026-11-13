/* Day 54 - Q104 (Logic Enhancers): Find the pivot integer x between 1 and n - O(1).
 * Note: Compile with -lm on Linux/macOS (e.g., gcc Q104_pivot_integer.c -lm).
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;
    long long x = (long long)llround(sqrt((double)total));

    if (x * x == total)
        printf("%lld\n", x);
    else
        printf("-1\n");

    return 0;
}
