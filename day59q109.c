/* Day 59 - Q109 (Logic Enhancers): Maximum sum of all subarrays of size k - O(n). */
#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    long long windowSum = 0;
    for (int i = 0; i < k; i++) windowSum += arr[i];

    long long maxSum = windowSum;
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) maxSum = windowSum;
    }

    printf("%lld\n", maxSum);
    return 0;
}
