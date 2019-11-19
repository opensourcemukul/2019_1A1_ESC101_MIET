





#include <stdio.h>
int swap(int *ptr1, int *ptr2)
{
	int temp;
	printf("swapping...\n");
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	return 0;
}

int main(int argc, char const *argv[])
{
	int a = 10, b = 20;
	printf("a = %d \t b = %d\n", a, b);
	// swap
	swap( &a, &b);
	printf("a = %d \t b = %d\n", a, b);
	return 0;
}