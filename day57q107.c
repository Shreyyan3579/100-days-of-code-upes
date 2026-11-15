/* Day 57 - Q107 (Logic Enhancers): Previous greater element for each element (brute force nested loop). */
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int prev = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d%s", prev, (i == n - 1) ? "\n" : ", ");
    }
    return 0;
}
