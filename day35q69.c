Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>
int main(){
int n, i;
printf("enter the size of array");
scanf("%d", &n);
int arr[n];
printf("enter %d numbers \n", n);
for(i=0; i<n; i++){
scanf("%d", &arr[i]);
}
int largest=arr[0];
int secondlargest=arr[0];
for(i=1; i<n; i++){
if(arr[i]>largest){
secondlargest=largest;
largest=arr[i];
} 
else if (arr[i]>secondlargest&&arr[i]!=largest){
secondlargest=arr[i];
}
}
if(secondlargest==largest){
printf("second largest number  does not exist \n");
}else{
printf("second largest number= %d\n", secondlargest);
}
return 0;
}
