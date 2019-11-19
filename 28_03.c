#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i=0;
	// printf("%d\n", (++i)++);
	printf("%d\n", ++(++i));
	return 0;
}