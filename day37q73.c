// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>
int main() {
int rows, cols;
printf("enter the number of rows and columns: ");
scanf("%d %d", &rows, &cols);
int matrix[rows][cols];
int rowsums[rows];
printf("enter the matrix elements \n");
for (int i = 0; i < rows; i++) {
for(int j=0; j<cols; j++){
scanf("%d", &matrix[i][j]);
}
}
for(int i=0; i<rows; i++){
int sum=0;
for(int j=0; j<cols; j++){
sum+=matrix[i][j];
}
rowsums[i]=sum;
}
printf("\n row sums \n");
for(int i=0; i<rows; i++){
printf("sum of row %d=%d\n", i+1, rowsums[i]);
}
return 0;
}

