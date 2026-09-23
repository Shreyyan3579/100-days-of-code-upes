#include <stdio.h>
int main(){
int arr[100], n, element, position;
printf("enter number of elements");
scanf("%d", &n);
printf("enter %d numbers \n", n);
for(int i=0; i<n; i++){
scanf("%d", &arr[i]);
}
printf("enter the number to insert");
scanf("%d", &element);
printf("enter the position 1 to %d)", n+1);
scanf("%d", &position);
if(position<1||position>n+1){
printf("invalid position \n");
}else{
for(int i=n; i>=position; i--){
arr[i]=arr[i-1];
}
arr[position-1]=element;
n++;
printf("array after inserting \n");
for(int i=0; i<n; i++){
printf("%d ", arr[i]);
}
printf("\n");
}
return 0;
}
