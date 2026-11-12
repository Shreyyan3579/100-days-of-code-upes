/* Day 51 - Q101 (Logic Enhancers): First and last occurrence of target in a sorted array - O(log n). */
#include <stdio.h>

int findBound(const int nums[], int n, int target, int findFirst) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid;
            if (findFirst) high = mid - 1;
            else low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main(void) {
    int n, target;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    scanf("%d", &target);

    int first = findBound(nums, n, target, 1);
    int last = (first == -1) ? -1 : findBound(nums, n, target, 0);
    printf("%d, %d\n", first, last);
    return 0;
}
