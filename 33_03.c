







#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a = 10, b = 20;
	int *ptr1 = &a;
	int *ptr2 = &b;
	int temp;
	printf("a = %d \t b = %d\n", a, b);
	printf("ptr1 = %p \t ptr2 = %p\n", ptr1, ptr2);
	printf("*ptr1 = %d \t *ptr2 = %d\n", *ptr1, *ptr2);
	// swap
	printf("swapping...\n");
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	printf("a = %d \t b = %d\n", a, b);
	printf("ptr1 = %p \t ptr2 = %p\n", ptr1, ptr2);
	printf("*ptr1 = %d \t *ptr2 = %d\n", *ptr1, *ptr2);
	return 0;
}