
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int *ptr;// datatype *ptr_variable;
	int **ptr1;
	int ***ptr2;
	int a = 10;
	ptr = &a; // ptr is assigned the address of a
	ptr1 = &ptr;
	ptr2 = &ptr1;
	printf("address of a = %p\n", &a);
	printf("value of a = %d\n", a);
	printf("address of ptr = %p\n", &ptr);
	printf("value of ptr = %p\n", ptr);
	printf("value at ptr = %d\n", *ptr);
	printf("address of ptr1 = %p\n", &ptr1);
	printf("value of ptr1 = %p\n", ptr1);
	printf("value at ptr1 = %p\n", *ptr1);
	printf("address of ptr2 = %p\n", &ptr2);
	printf("value of ptr2 = %p\n", ptr2);
	printf("value at ptr2 = %p\n", *ptr2);
	printf("value at value at value at ptr2 = %d\n", ***ptr2);
	return 0;
}




/*a
value at ptr
value at value at ptr1
value at *ptr1
**ptr1

ptr
value at ptr1
*/




