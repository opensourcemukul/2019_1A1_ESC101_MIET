







#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a = 10, b = 20;
	int temp;
	printf("a = %d \t b = %d\n", a, b);
	printf("&a = %p \t &b = %p\n", &a, &b);
	// swap
	printf("swapping...\n");
	temp = a;
	a = b;
	b = temp;
	printf("a = %d \t b = %d\n", a, b);
	printf("&a = %p \t &b = %p\n", &a, &b);
	return 0;
}