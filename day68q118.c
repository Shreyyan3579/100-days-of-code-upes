/* Day 68 - Q118 (Logic Enhancers): Find the missing number in an array containing 0..n except one. */
#include <stdio.h>

int main(void) {
    int n, val;
    scanf("%d", &n);

    long long expected = (long long)n * (n + 1) / 2;
    long long actual = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        actual += val;
    }

    printf("%lld\n", expected - actual);
    return 0;
}
