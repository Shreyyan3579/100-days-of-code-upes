#include<stdio.h>
int main (){
int n;
printf("enter number of elements");
scanf("%d", &n);
int arr[n];
int even=0;
int odd=0;
printf("enter %d elements \n", n);
for(int i=0; i<n; i++) {
scanf("%d", &arr[i]);
}
for(int i=0; i<n; i++){
if(arr[i]%2==0){
even++;
}else{
odd++;
}
}
printf("even elements=%d \n", even);
printf("odd elements=%d \n", odd);
return 0;
}
