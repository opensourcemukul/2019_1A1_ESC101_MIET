#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int *a;
	a = malloc(8);
	printf("%p\n", a);
	printf("%p\n", a+1);
	printf("%p\n", a+2);
	printf("%p\n", a+3);
	printf("%p\n", a+500);
	printf("\n");
	*a = 10;
	*(a+1) = 20;
	*(a+500) = 30;
	printf("%d\n", *a);
	printf("%d\n", *(a+500));
	return 0;
}