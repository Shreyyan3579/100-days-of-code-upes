/* Day 61 - Q111 (Logic Enhancers): First negative integer in each subarray of size k - O(n). */
#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d", &n);
    int arr[n], q[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    int front = 0, back = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) q[back++] = i;
        if (front < back && q[front] <= i - k) front++;

        if (i >= k - 1) {
            int val = (front < back) ? arr[q[front]] : 0;
            printf("%d%c", val, (i == n - 1) ? '\n' : ' ');
        }
    }
    return 0;
}
