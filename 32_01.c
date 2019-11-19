










#include <stdio.h>
int main(int argc, char const *argv[])
{
	int *ptr;
	// datatype *ptr_variable;
	int a = 10;
	ptr = &a; // ptr is assigned the address of a
	printf("a = %d\n", a);
	printf("address of a = %p\n", &a);
	printf("ptr = %p\n", ptr);
	printf("address of ptr = %p\n", &ptr);
	printf("access a using ptr\n");
	printf("address of a using ptr= %p\n", ptr);
	printf("value of a using ptr= value at ptr = %d\n", *ptr);
	return 0;
}




