
#include <stdio.h>
int main()
{
	int a[5]; //declaring an array a
	int i;
	// read into an array
	printf("Enter the values in the array:\n");
	for (i = 0; i < 5; ++i)
	{
		printf("Enter item number %d: ", i);
		scanf(" %d", &a[i]);
	}
	// manipulating the array
	for (i = 0; i < 5; ++i)
	{
		a[i] = 5*a[i];
	}
	// displaying all the elements in the array
	for (i = 0; i < 5; ++i)
	{
		printf("item number %d: %d\n", i, a[i]);
	}
	return 0;
}