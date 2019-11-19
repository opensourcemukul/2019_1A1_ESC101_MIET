#include <stdio.h>
struct node
{
	int value;
	struct node *ptr;
};
int main(int argc, char const *argv[])
{
	struct node a, b;
	a.value = 10;
	a.ptr = &b;
	b.value = 20;
	b.ptr = &a;
	printf("%d\n", b.ptr ????? );
	return 0;
}