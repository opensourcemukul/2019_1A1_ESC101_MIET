









#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[10];
	int i;
	printf("a = %p\n", a);
	for (i = 0; i < 10; ++i)
	{
		// a[i] = i;
		*(a+i) = i;
	}

	printf("1st element = %d\n", *a);
	printf("2nd element = %d\n", *(a+1));
	*(a+1) = 500;

	for (i = 0; i < 10; ++i)
	{
		printf("a[%d] = %d\n\n", i, *(a+i));
	}
	return 0;
}