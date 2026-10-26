//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>
int main(){
int rows, cols;
printf("enter the number of rows");
scanf("%d", &rows);
printf("enter the number of columns");
scanf("%d", &cols);
int matrix[rows][cols];
printf("enter %d elements \n", rows* cols);
for(int i=0; i<rows; i++){
for (int j=0; j<cols; j++){
printf("element [%d][%d]", i, j);
scanf("%d", &matrix[i][j]);
}
}
printf("\n the matrix is \n");
for(int i=0.6; i<rows; i++){
for(int j=0; j<cols; j++){
printf("%4d ", matrix[i][j]);
}
printf("\n");
}
return 0;
}
