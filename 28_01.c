#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	while(1)
	{
		for (i = 0; i < 10; ++i)
		{
			printf("i=%d\n", i);
			if (i%2 == 0)
			{
				printf("\t i%2 == 0\n");
				if (i%3 == 0)
				{
					break;
				}
			}
		}
		printf("for ke bahar\n");
		if (i%3 == 0)
		{
			break;
		}
	}
	return 0;
}