// bubble sort
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[5];
	int temp, i, change = 0;
	printf("Enter the values in the array:\n");
	for (i = 0; i < 5; ++i)
	{
		printf("Enter item number %d: ", i);
		scanf(" %d", &a[i]);
	}
	for (int j = 0; j < 5; ++j)
	{
		printf("%d\t", a[j]);
	}
	printf("\n");
	do
	{
		change = 0;
		for (i = 0; i < 4; ++i)
		{
			// compare and swap
			if (a[i]>a[i+1])
			{
				change++;
				// swap a[i] and a[i+1]
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
			for (int j = 0; j < 5; ++j)
			{
				printf("%d\t", a[j]);
			}
			printf("\n");
		}
		printf("-------\n");
	}while(change != 0);
	

	for (i = 0; i < 5; ++i)
	{
		printf("item number %d: %d\n", i, a[i]);
	}
	return 0;
}