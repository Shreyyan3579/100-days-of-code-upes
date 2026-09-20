//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

    
#include <stdio.h>
int linearsearch (int arr[], int size, int target) {
for(int i=0; i<size; i++) {
if(arr[i]==target) {
return i;
}
}
return -1;
}
int main(){
int n, target, result;
printf("enter number of elements");
scanf("%d", &n);
int arr[n];
printf("enter %d integers \n", n);
for(int i=0; i<n; i++){
scanf("%d", &arr[i]);
}
printf("enter the number to search for");
scanf("%d", &target);
result=linearsearch(arr, n, target);
if(result!=-1){
printf("number %d found at %d Position %d \n", target, result, result+1);
} else {
printf("number %d is not present in the array \n", target);
}
return 0;
}
