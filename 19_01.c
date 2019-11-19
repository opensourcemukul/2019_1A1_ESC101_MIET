#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i = 0;
	/*printf("%d\n", i++);//post increment*/
	printf("%d\n", i);
	i=i+1;

	/*printf("%d\n", ++i);//pre increment*/
	i=i+1;
	printf("%d\n", i);

	/*printf("%d\n", i--);//post decrement*/
	printf("%d\n", i);
	i=i-1;

	/*printf("%d\n", --i);//pre decrement*/
	i = i-1;
	printf("%d\n", i);
	
	// printf("%d\n", ++i++);
	return 0;
}