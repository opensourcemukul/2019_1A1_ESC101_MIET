#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int *a;
	int *b;
	a = (int *)malloc(8);
	// a is made to point to the starting address of 
	// newly allocated 8 bytes of memory, and the memory stores integers
	printf("a = %d\n", a);
	b = (int *)malloc(8);
	printf("b = %d\n", b);
	printf("%d\n", b-a);
	free(a);
	free(b);
	a = (int *)malloc(8);
	printf("a = %d\n", a);
	b = (int *)malloc(8);
	printf("b = %d\n", b);
	printf("%d\n", b-a);
	free(a);
	free(b);
	a = (int *)malloc(8);
	printf("a = %d\n", a);
	b = (int *)malloc(8);
	printf("b = %d\n", b);
	printf("%d\n", b-a);
	free(a);
	free(b);
	a = (int *)malloc(8);
	printf("a = %d\n", a);
	b = (int *)malloc(8);
	printf("b = %d\n", b);
	printf("%d\n", b-a);
	free(a);
	free(b);
	a = (int *)malloc(100);
	printf("a = %d\n", a);
	b = (int *)malloc(100);
	printf("b = %d\n", b);
	printf("%d\n", b-a);
	free(a);
	free(b);
	return 0;
}