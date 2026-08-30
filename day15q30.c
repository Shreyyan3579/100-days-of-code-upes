#include<stdio.h>
int main(){
int r=0,n,rev=0;
n=5432;
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("reverse of n is %d", rev);
return 0;
}
