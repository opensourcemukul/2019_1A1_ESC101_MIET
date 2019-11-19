#include <stdio.h>
#include <time.h>
int repeat(int i)
{
	if (i == 100)
	{
		return 1;
	}
	printf("%d\n", i);
	sleep(1);
	repeat(++i);
}
int main(int argc, char const *argv[])
{
	repeat(0);
	return 0;
}