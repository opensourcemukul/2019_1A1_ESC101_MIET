







#include <stdio.h>
int main(int argc, char const *argv[])
{
	int *ptr;
	// datatype *ptr_variable;
	int a = 10;
	ptr = &a; // ptr is assigned the address of a
	printf("ptr = %p\n", ptr);
/*	printf("ptr+1 = %p\n", ptr+1);
	printf("*ptr = %d\n", *ptr); // *ptr is the value at ptr
	printf("*(ptr-1) = %d\n", *(ptr-1)); // *ptr is the value at (ptr+1)
	printf("*(ptr-2) = %d\n", *(ptr-2)); // *ptr is the value at (ptr+1)
	*(ptr-1) = 5;
	printf("*(ptr-1) = %d\n", *(ptr-1)); // *ptr is the value at (ptr+1)
	*(ptr-2) = 0;
	printf("*(ptr-2) = %d\n", *(ptr-2)); // *ptr is the value at (ptr+1)
	*ptr = 100;
*/	printf("a = %d\n", a);
	return 0;
}




