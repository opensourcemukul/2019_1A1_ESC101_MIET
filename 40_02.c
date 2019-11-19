#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int a[1];
	*a = 10;
	*(a+1) = 20;
	*(a+20) = 20;
	a[21] = 40;
	printf("%d\n", *a);
	printf("%d\n", *(a+1));
	printf("%d\n", *(a+20));
	printf("%d\n", a[20]);
	printf("%d\n", a[21]);
	return 0;
}