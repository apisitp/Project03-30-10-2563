#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main() {
	int a, b, i, j, i_max = 0, j_max = 0,det;
	int matrix[3][3];
	
		for (i = 1;i <= 3;i++)
		{
			
				for (j = 1; j <= 3; j++)
				{
					printf("\nData [%d][%d] = ", i, j);
					scanf("%d", &matrix[i][j]);
				}
			
			
		}
		
	
	a = (matrix[1][1] * matrix[2][2] * matrix[3][3]) + (matrix[2][1] * matrix[3][2] * matrix[1][3]) + (matrix[3][1] * matrix[1][2] * matrix[2][3]);
	b = (matrix[1][3] * matrix[2][2] * matrix[3][1]) + (matrix[2][3] * matrix[3][2] * matrix[1][1]) + (matrix[3][3] * matrix[1][2] * matrix[2][1]);
	det = a - b;
	printf("\nDeterminant :");
	printf("%d", det);
	
	return 0;
}