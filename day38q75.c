// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/


#include <stdio.h>
void addmatrices(int r, int c, int A[r][c], int B[r][c], int C[r][c]){
for(int i=0; i<r; i++){
for(int j=0; j<c; j++){
C[i][j]=A[i][j]+B[i][j];
}
}
}
void printmatrix(int r, int c, int matrix[r][c]){
for(int i=0; i<r; i++){
for(int j=0; j<c; j++){
printf("%d ", matrix[i][j]); 
}
printf("\n");
}
}
int main(){
int r=2, c=3;
int A[2][3]={{1, 2, 3}, {4, 5, 6}};
int B[2][3]={{7, 8, 9}, {1, 2, 3}};
int C[2][3];
addmatrices(r, c, A, B, C);
printf("resultant matrix \n");
printmatrix(r, c, C);
return 0;
}


