#include <stdio.h>
int main(){
int arr[10], n, i;
int max, min;
printf("enter the number of elements");
scanf("%d", &n);
printf("enter the elements \n");
for(i=0; i<n; i++){
scanf("%d", &arr[i]);
}
max=min=arr[0];
for(i=1; i<n; i++) {
if (arr[i]>max)
max=arr[i];
if (arr[i]<min)
min=arr[i];
}
printf("maximum element=%d \n", max);
printf("minimum element=%d \n", min);
return 0;
}
