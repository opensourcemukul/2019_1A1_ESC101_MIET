#include <stdio.h>
struct node
{
	int value;
	struct node *next;
};
int main(int argc, char const *argv[])
{
	struct node a, b;
	printf("&a= %p\n", &a);
	a.value = 10;
	a.ptr = &b;
	b.value = 20;
	b.ptr = &a;
	printf("b.next= %p\n", b.ptr);
	printf("(*(b.next)).value= %d\n", (*(b.next)).value);
	printf("b.next->value= %d\n", b.next->value);
	return 0;
}