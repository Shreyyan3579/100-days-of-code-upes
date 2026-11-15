/* Day 58 - Q108 (Logic Enhancers): Product of array except self - O(n), no division. */
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int nums[n], answer[n];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d%c", answer[i], (i == n - 1) ? '\n' : ' ');
    }
    return 0;
}
