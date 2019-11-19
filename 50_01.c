#include <stdio.h>
struct node
{
	int value;
	struct node *ptr;
};
int main(int argc, char const *argv[])
{
	struct node a, b;
	printf("&a= %p\n", &a);
	a.value = 10;
	a.ptr = &b;
	b.value = 20;
	b.ptr = &a;
	// printf("b.ptr= %p\n", b.ptr);
	// printf("(*(b.ptr)).value= %d\n", (*(b.ptr)).value);
	// printf("b.ptr->value= %d\n", b.ptr->value);
	return 0;
}