/* Day 67 - Q117 (Logic Enhancers): Merge two sorted arrays into a single sorted array. */
#include <stdio.h>

int main(void) {
    int m, n;
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);

    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    int merged[m + n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        merged[k++] = (a[i] <= b[j]) ? a[i++] : b[j++];
    }
    while (i < m) merged[k++] = a[i++];
    while (j < n) merged[k++] = b[j++];

    for (int p = 0; p < m + n; p++) {
        printf("%d%c", merged[p], (p == m + n - 1) ? '\n' : ' ');
    }
    return 0;
}
