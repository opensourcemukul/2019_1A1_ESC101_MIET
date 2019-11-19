







#include <stdio.h>
int main(int argc, char const *argv[])
{
	int *ptr;// datatype *ptr_variable;
	int a = 10;
	ptr = &a; // ptr is assigned the address of a
	printf("address of ptr = %p\n", &ptr);
	printf("value of ptr = %p\n", ptr);
	printf("value at ptr = %d\n", *ptr);
	printf("value at address of ptr = %p\n", *&ptr);
	printf("value at address of a = %d\n", *&a);
	// printf("address of the value at a = %p\n", &*a);
	printf("address of the value at ptr = %p\n", &*ptr);
	return 0;
}



/*
value at address of ptr
value at &ptr
*&ptr*/
/*value at the address of a
value at &a
*&a
*/
/*address of the value at a
address of *a
&*a*/