//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>
int main(){
int arr[100], n, position;
printf("enter number of elements");
scanf("%d", &n);
printf("enter %d elements \n", n);
for(int i=0; i<n; i++){
scanf("%d", &arr[i]);
}
printf("enter the position of the element to delete 1 to %d", n);
scanf("%d", &position);
if(position<1||position>n){
printf("invalid position \n");
}else{
for(int i=position-1; i<n-1; i++){
arr[i]=arr[i+1];
}
n--;
printf("array after deleting \n");
for(int i=0; i<n; i++){
printf("%d ", arr[i]);
}
printf("\n");
}
return 0;
}
