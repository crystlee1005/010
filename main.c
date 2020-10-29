
#include <stdio.h>

#define ROWS 3
#define COLS 3

int main(void)
{
	//array declaration
int A[ROWS][COLS] = { 
    {2, 3, 0},
    {8, 9, 1},
    {7, 0, 5} };
int B[ROWS][COLS] = { //���ϱ� ��� ���
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1} };
int C[ROWS][COLS]; //���� ��� ���

addMatrix(A, B, C);
printMatrix(C);
//�迭�� call by reference 
return 0;
}

void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS])
{ int i, j;
//C = A + B
for (i=0; i<ROWS; i++)
    for(j=0; j<COLS; j++)
     C[i][j] = A[i][j] + B[i][j];

}
void printMatrix(int A[][COLS])
{ 
//print using for loop
int i, j;
for (i=0; i<ROWS; i++)
  {
	  for(j=0; j<COLS; j++)
    
    printf("%d ", A[i][j]); 
	printf("\n"); 
}
}
