/* Day 56 - Q106 (Logic Enhancers): Next greater element for each element (brute force nested loop). */
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int next = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        printf("%d%s", next, (i == n - 1) ? "\n" : ", ");
    }
    return 0;
}
