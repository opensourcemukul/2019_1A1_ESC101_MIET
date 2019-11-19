#define MAX 100
#include <stdio.h>
int main()
{
	int a[MAX][MAX]; //declaring a 3 x 3 matrix
	int b[MAX][MAX]; //declaring a 3 x 3 matrix
	int c[MAX][MAX]; //declaring a 3 x 3 matrix
	int i, j;
	int nRows, nCols;
	printf("Enter the number of rows:\n");
	scanf(" %d", &nRows);
	printf("Enter the number of columns:\n");
	scanf(" %d", &nCols);
	// read into an array
	printf("Enter the values in the matrix a:\n");
	for (i = 0; i < nRows; ++i)
	{
		for (j = 0; j < nCols; ++j)
		{
			printf("a[%d][%d] = ", i, j);
			scanf(" %d", &a[i][j]);
			printf("\n");
		}
	}
	printf("\ndisplaying the matrix a:\n");
	for (i = 0; i < nRows; ++i)
	{
		for (j = 0; j < nCols; ++j)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the values in the matrix b:\n");
	for (i = 0; i < nRows; ++i)
	{
		for (j = 0; j < nCols; ++j)
		{
			printf("b[%d][%d] = ", i, j);
			scanf(" %d", &b[i][j]);
			printf("\n");
		}
	}
	printf("\ndisplaying the matrix b:\n");
	for (i = 0; i < nRows; ++i)
	{
		for (j = 0; j < nCols; ++j)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}

	// sum of matrices
	for (i = 0; i < nRows; ++i)
	{
		for (j = 0; j < nCols; ++j)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\ndisplaying the matrix c which is the sum of a and b:\n");
	for (i = 0; i < nRows; ++i)
	{
		for (j = 0; j < nCols; ++j)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}