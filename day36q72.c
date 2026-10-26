// Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>
int main(){
int rows=3;
int cols=3;
int matrix[3][3]={ {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
int sum=0;
for(int i=0; i<rows; i++){
for(int j=0; j<cols; j++){
sum+=matrix[i][j]; 
}
} 
printf("the sum of all elements in the matrix is %d\n", sum);
return 0;
}
