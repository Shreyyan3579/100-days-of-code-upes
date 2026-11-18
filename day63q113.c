/* Day 63 - Q113 (Logic Enhancers): Find the kth smallest element in an array. */
#include <stdio.h>
#include <stdlib.h>

int cmpInt(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    qsort(arr, (size_t)n, sizeof(int), cmpInt);
    printf("%d\n", arr[k - 1]);
    return 0;
}
