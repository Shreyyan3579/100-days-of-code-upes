/* Day 60 - Q110 (Logic Enhancers): Maximum element in each subarray of size k - O(n). */
#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d", &n);
    int arr[n], dq[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    int front = 0, back = 0;
    for (int i = 0; i < n; i++) {
        if (front < back && dq[front] <= i - k) front++;
        while (front < back && arr[dq[back - 1]] <= arr[i]) back--;
        dq[back++] = i;

        if (i >= k - 1) {
            printf("%d%c", arr[dq[front]], (i == n - 1) ? '\n' : ' ');
        }
    }
    return 0;
}
