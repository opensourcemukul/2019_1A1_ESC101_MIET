/*fact(n) = n*(n-1)*(n-2)*...*1 if n>0 and n is integer
fact(n) = 1 if n = 0

fact(n) = n*(n-1)*(n-2)*...*1 
fact(n-1) = (n-1)*(n-2)*(n-3)*...*1

fact(n) = n*fact(n-1)
		= n*(n-1)*fact(n-2)
*/
int fact(int); //function prototype
#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("%d\n", fact(5));
	return 0;
}

int fact(int n)
{
	int temp;
	printf("inside fact function with n = %d\n", n);
	if (n == 0)
	{
		temp = 1;
		printf("returning %d \n", temp);
		return temp;
	}
	else if (n>0)
	{
		temp = n*fact(n-1);
		printf("returning %d \n", temp);
		return temp;
	}
}