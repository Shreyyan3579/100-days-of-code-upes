//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>
int main(){
int n, k, i, j, temp;
printf("enter the size of array");
scanf("%d", &n);
int arr[n];
printf("enter %d numbers \n", n);
for(i=0; i<n; i++) {
scanf("%d", &arr[i]);
}
printf("enter k");
scanf("%d", &k);
k=k%n;
for(i=0; i<k; i++){
temp=arr[n-1];
for(j=n-1; j>0; j--){
arr[j]=arr[j-1];
}
arr[0]=temp;
}
printf("array after rotation \n");
for(i=0; i<n; i++) {
printf("%d ", arr[i]);
}
return 0;
}
