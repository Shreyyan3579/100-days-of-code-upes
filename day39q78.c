//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/


#include <stdio.h>
int summaindiagonal(int n, int matrix[n][n]){
int sum=0;
for(int i=0; i<n; i++){
sum+=matrix[i][i];
}
return sum;
}
int main(){
int n=3;
int matrix[3][3]={
{2, 3, 4},
{5, 6, 7},
{8, 9, 1}
};
int sum =summaindiagonal(n, matrix);
printf("sum of diagonal elements %d\n", sum);
return 0;
}













