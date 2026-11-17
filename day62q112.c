/* Day 62 - Q112 (Logic Enhancers): Maximum contiguous subarray sum using Kadane's algorithm. */
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    long long currSum = arr[0], maxSum = arr[0];
    for (int i = 1; i < n; i++) {
        currSum = (arr[i] > currSum + arr[i]) ? arr[i] : currSum + arr[i];
        if (currSum > maxSum) maxSum = currSum;
    }

    printf("%lld\n", maxSum);
    return 0;
}
