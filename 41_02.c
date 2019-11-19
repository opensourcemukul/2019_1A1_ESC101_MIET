#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int *a;
	int n;
	puts("How many students?");
	scanf(" %d", &n);
	a = (int *)calloc(n,sizeof(int));
	puts("do you want to increase the size of array? enter new size:");
	scanf(" %d", &n);
	a = (int *)realloc(a, n*sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		scanf(" %d", &a[i]);
	}
	puts("\n");
	for (int i = 0; i < n; ++i)
	{
		printf(" %d", a[i]);
	}
	free(a);
	return 0;
}