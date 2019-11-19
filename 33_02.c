







#include <stdio.h>
int swap(int a, int b)
{
	int temp;
	printf("inside swap function:\n&a = %p \t &b = %p\n", &a, &b);
	printf("a = %d \t b = %d\n", a, b);
	printf("&a = %p \t &b = %p\n", &a, &b);
	printf("swapping...\n");
	temp = a;
	a = b;
	b = temp;
	printf("a = %d \t b = %d\n", a, b);
	printf("&a = %p \t &b = %p\n", &a, &b);
	return 0;
}
int main(int argc, char const *argv[])
{
	int a = 10, b = 20;
	int temp;
	printf("a = %d \t b = %d\n", a, b);
	printf("&a = %p \t &b = %p\n", &a, &b);
	// swap
	swap(a, b);
	printf("outside swap function\n");
	printf("a = %d \t b = %d\n", a, b);
	printf("&a = %p \t &b = %p\n", &a, &b);
	return 0;
}