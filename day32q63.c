Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>
int main() {
int a[100], b[100], c[200];
int n, m, i;
printf("enter size of first array");
scanf("%d", &n);
printf("enter numbers of first array \n");
for(i=0; i<n; i++){
scanf("%d", &a[i]);
c[i]=a[i];
}
printf("enter size of second array");
scanf("%d", &m);
printf("enter number of second array \n");
for(i=0; i<m; i++){
scanf("%d", &b[i]);
c[n+i]=b[i];
}
printf("merged array");
for(i=0; i<n+m; i++){
printf("%d ", c[i]);
}
return 0;
}
